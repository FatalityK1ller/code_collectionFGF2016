#include <stdio.h>

int main(){

	int vet[5];

	for(int i=0;i<4;i++){
		printf("Digite um valor para o vetor \n");
		scanf("%d",&vet[i]);
	}

	for(int i=4;i<=0;i--){
		printf("%d",vet[i]);
	}

	return 0;
}


