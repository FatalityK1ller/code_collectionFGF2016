#include <stdio.h>

int main(){

	int vet[5];
	int i,num;

	printf("informe um valor qualquer");
	scanf("%d\n",&num);
	printf("\n");


	for(i=0;i<5;i++){
		printf("digite um valor \n");
		scanf("%d\n",&vet[i]);

	}
	for(i=0;i<5;i++){
		if(vet[i]==num){
			printf("numero digitado posição %d\n",i,i);
		}
		else if(vet[i]!=num){
			printf("numero digitado não estar no vetor \n");
		}
		if(num==vet[4]){
			printf("numero digitado igual ao valor do vetor posicao 4\n");
		}
	}
	return 0;
}
