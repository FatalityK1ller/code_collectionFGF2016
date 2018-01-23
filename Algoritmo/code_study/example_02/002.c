#include <stdio.h>

int main(){

	int vet[5],i,count=0;

	for(i=0;i<4;i++){
		printf("Digite um valor para o vetor \n");
		scanf("%d",&vet[i]);
	}
	for(i=1;i<5;i++){
		if(vet[i]<i){
			count=count+1;
		}
	}
	
	printf("posição eh %d : ",count);

	return 0;
}
	
