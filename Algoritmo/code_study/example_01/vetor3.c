#include <stdio.h>

int main(){

	int vet[20];
	int i,media,soma=0;

	for(i=0;i<20;i++){
		printf("insira a nota \n");
		scanf("%d\n",&vet[i]);
		soma=soma+vet[i];
	}
	media=soma/20;
	printf("A media das notas eh %d\n: ",media);

	return 0;
}
