#include <stdio.h>

int main(){

	int a;


	do{
	
		printf("Digite um numero positivo\n");
		scanf("%d\n",&a);

		if(a<0){
		printf("PROGRAMA ENCERRADO VALOR NEGATIVO INSERIDO\n");

	}
	}while(a>=0);
	return 0;

}
