#include <stdio.h>

int main(){

	int vet[5];
	int i;

	for(i=0;i<4;i++){
		printf("Digite um valor para o vetor \n");
		scanf("%d",&vet[i]);
	}
	for(i=4;i<=0;i--){
		printf("%d \n",vet[i]);
	}

	return 0;
}

