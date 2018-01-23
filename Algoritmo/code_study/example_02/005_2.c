#include <stdio.h>

int main(){

	int vet[5],i,j,aux;

	for(i=0;i<4;i++){
		printf("Digite um valor \n");
		scanf("%d",&vet[i]);
	}

	for(i=0;i<4;++i){
		for(j=i+1;j<4;++j){
			if(vet[i]<vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;

			}		
		}
	}

	printf("A ordem inversa do vetor eh \n");

	for(i=0;i<4;++i){
		printf("%d\n",vet[i]);
	}

	return 0;

}


