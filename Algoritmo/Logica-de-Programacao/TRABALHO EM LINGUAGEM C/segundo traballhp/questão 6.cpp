#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite um numero \n");
	scanf("%d",&numero);
	
	if(numero>0){
		printf("NUMERO INFORMADO POSITIVO 0 \n");
	}
	else if(numero<0){
		printf("NUMERO INFORMADO NEGATIVO \n");
	}
	else if(numero==0){
		printf("O NUMERO INFROMADO EH '0' \n");
	}
	
	return 0;
}

