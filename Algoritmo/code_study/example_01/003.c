#include <stdio.h>

int main(){

	int vet[5],i;

	for(i=0;i<4;i++){
		printf("Digite um numero inteiro \n");
		scanf("%d",&vet[i]);
	}
	
	for(i=4;i>=0;i--){
		printf("%d : ",vet[i]);
	}

	return 0;
}

 
