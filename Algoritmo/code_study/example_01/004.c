#include <stdio.h>

int main(){

	int vet[5],i,num,count=0;

	for(i=0;i<4;i++){
		printf("Digite um valor para o vetor \n");
		scanf("%d",&vet[i]);
	}
	
	printf("Escreva um numero qualquer \n");
	scanf("%d",&num);

	for(i=0;i<4;i++){
		if(vet[i]==num){
			count=count+1;
		}
	}

	printf("O numero qualquer aparece %d vezes \n",count);

	return 0;
}


