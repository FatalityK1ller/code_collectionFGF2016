#include <stdio.h>

int main(){

	int n,i;
	

	printf("Digite um valor para 'n' \n");
	scanf("%d",&n);

	int vet[n];

	for(i=0;i<n;i++){
		printf("informe o valor do vetor \n");
		scanf("%d",&vet[i]);
	}
	int j=1;
	for(i=0;i<n;i++){
		printf("O %d° numero, vetor : %d \n",j,vet[i]);
		j++;
	
	}

	return 0;
}
