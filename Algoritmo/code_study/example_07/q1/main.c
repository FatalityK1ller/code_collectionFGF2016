#include <stdio.h>

int main(){

	int vet1[5],vet2[5];
	int i;

	for(i=0;i<4;i++){
		printf("Digite o valor do vetor 1 :\n  ",i+1);
		scanf("%d",&vet1[i]);
	}

	for(i=0;i<4;i++){
		printf("Digite o valor do vetor 2 :\n ",i+1);
		scanf("%d",&vet2[i]);
	}


	for(i=0;i<4;i++){
		if(vet1[i]==vet2[i]){
			printf("Posicao eh %d \n",i+1);
			printf("Valor vetor %d \n",vet1[i]);
		}

	}
	return 0;
}

