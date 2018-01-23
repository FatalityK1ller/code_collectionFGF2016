#include <stdio.h>

int main(){

	int vet1[3];
	int vet2[3];
	int vet3[3];
	int i;

	for(i=0;i<3;i++){
		printf("insira um valor vetor 1\n");
		scanf("%d\n",&vet1[i]);
	}
	
	for(i=0;i<3;i++){
		printf("insira um valor vetor 2\n");
		scanf("%d\n",&vet2[i]);
	}

	for(i=0;i<3;i++){
		vet3[i]=vet1[i]+vet2[i];
		printf("valores do Vetor 3 %d\n",vet3[i]);
	}

	return 0;
}

	
