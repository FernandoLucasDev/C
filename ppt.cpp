#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int esc;
	int jogar = 1;
	int ger = rand()%3;
	
	if(jogar == 1){
		printf("Escolha: \n 1- pedra \n 2- papel \n 3- tesoura");
		scanf("%d",&esc);
		switch(esc){
			case 1:
				
				if(esc == 1 && ger == 1){
				printf("o sistema gerou 'pedra'. Empate! :|");
			} else if(esc == 1 && ger == 2){
				printf("O sistema gerou papel. Você perdeu! :(");
			} else {
				printf("O sistema gerou tesoura. Você ganhou! :)");
			}
			break;
			case 2:
				if(esc == 2 && ger == 1){
			printf("o sistema gerou pedra. Você ganhou! :)");
		} else if(esc == 2 && ger == 2){
			printf("O sistema gerou papel. Empate! :|");
		} else {
			printf("O sistema gerou tesoura. Você perdeu! :(");
		}
		   break;
		   case 3:
		   	if(esc == 3 && ger == 1){
			printf("o sistema gerou 'pedra'. Você perdeu! :(");
		} else if(esc == 3 && ger == 2){
			printf("O sistema gerou papel. Você ganhou! :)");
		} else {
			printf("O sistema gerou tesoura. Empate! :|");
		}
		  break;
		}
		printf("\n deseja jogar novamente? \n 1- sim \n 2- não");
		scanf("%d", &jogar);	
	}
	 else {
		printf("foi bom brincar com você!");
	}
	
	
	
	
}

