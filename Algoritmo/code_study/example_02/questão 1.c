#inlcude <stdio.h>

int main(){

	int vet1[5],vet2[5];
	int i;

	for(i=0;i<4;i++){
		printf("Digite o valor do vetor \n : ",i+1);
		scanf("%d",&vet1[i]);
	}

	for(i=0;i<4;i++){
		printf("Digite o valor do vetor \n : ",i+1);
		scanf("%d",&vet2[i]);
	}


	for(i=0;i<4;i++){
		if(vet1[i]==vet2[i]){
			printf("Posicao eh %d e valor vetor eh %d \n ",i,vet[i]);
		}

	}
	return 0;
}


