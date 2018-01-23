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
			printf("numero digitado posição %d\n",i);
		}
		else{
			printf("numero digitado não estar no vetor \n");
		}
	}
	return 0;
}
