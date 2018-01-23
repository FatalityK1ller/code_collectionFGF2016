#include <stdio.h>

int main(){

	int vet[5];
	int vet2[5];
	int i;
        /*armazenamento */
	for(i=0;i<5;i++){
		printf("digite um numero \n");
		scanf(" %d\n",&vet[i]);
		
		
	}
	/*transferencia*/
	for(i=0;i<5;i++){
		vet2[i] = vet[i];
		printf("%d",vet2[i]);
	}
	
		
	return 0;
}


