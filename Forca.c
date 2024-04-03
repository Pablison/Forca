#include <stdio.h>
#include <stdlib.h>
#include static int pontos_jogador=0, pontos_cpu=0;/*aqui temos as variaveis globais, estão aqui para contar os pontos da CPU e do jogador*/ 

void jogador(){
   int jog;
	printf(" Digite a 1 para jogar contra outra pessoa e 2 para jogar contra o computador \n");
	scanf("%d",&jog);
}

void jokenpo() {     
int jogador, cpu;         
	printf ("  Jo ken Po  \n");     
	printf ("%d Jogador X CPU %d\n", pontos_jogador, pontos_cpu);     
	printf ("--------------\n");     printf ("0. Pedra\n");     
	printf ("1. Papel\n");     
	printf ("2. Tesoura\n");     
	printf ("3. Sair\n");     
	scanf ("%d", &jogador);     
		if ((jogador < 0) || (jogador >=3))     {         
		exit (0);     }     


srand(time(NULL));     
cpu = rand() % 3; /*gera um numero aleatorio*/     
	switch(cpu)     {         
		case 0: printf ("CPU -> Pedra\n"); break;         
		case 1: printf ("CPU -> Papel\n"); break;         
		case 2: printf ("CPU -> Tesoura\n"); break;     }     
	if ((jogador == 0 && cpu==2) || (jogador == 1 && cpu == 0) || (jogador == 2 && cpu == 1)) /*verifica se o jogador venceu*/         {             
		printf("\nVoce venceu!\n");             
		pontos_jogador++;             
		jokenpo();         }     
		if (jogador == cpu) /*verifica se houve empate*/         {             
		printf ("\nEmpate!\n");             
		jokenpo();         }     
		else         {             
		printf ("\nCPU venceu!\n");             
		pontos_cpu++;             
		jokenpo();         }         
		 
	}
	
	
int main() {     
	jokenpo();
	return 0; 
	} 

