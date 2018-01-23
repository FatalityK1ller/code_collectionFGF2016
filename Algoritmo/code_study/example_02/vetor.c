#include <stdio.h>

int main(){

	int n,i;
	int j;
	int count=0;
	

	printf("Digite um valor para 'n' \n");
	scanf("%d\n",&n);

	int vet[n];

	for(i=0;i<n;i++){
		printf("informe o valor do vetor \n");
		scanf("%d\n",&vet[i]);
	}
	

	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(vet[j]!=vet[i]){
				printf(" ");
			}
			else{
				count++;
			}
		}	
	
		printf("O %d° numero, vetor : %d \n",vet[i],count);
		
	
	}

	return 0;
}
