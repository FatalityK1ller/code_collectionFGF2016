#include <stdio.h>

int main(){

	char state;


	printf("Digite uma letra para informar se você eh \n Casado, Solteiro, Divociado, Viuvo, Desquitado\n");
	scanf("%c",&state);

	if(state == 's' || state =='S'){
		printf("SOLTEIRO \n");
		
	}
	if(state == 'd'){
		printf("DIVORCIADO \n");
		
	}
	if(state == 'c' || state == 'C'){
		printf("CASADO \n");
		
	}
	if(state == 'v' || state =='V'){
		printf("VIUVO \n");
		
	}
	if(state == 'D'){
		printf("DESQUITADO \n");
		
	}								
	else{
		printf("INFORMAÇÃO SEM BASE DA DADOS \n");
	}
				

	return 0;

}
	
	
	

