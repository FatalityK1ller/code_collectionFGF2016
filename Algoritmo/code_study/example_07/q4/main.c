#include <stdio.h>
#include <stdlib.h>

int main(void){


	int i,vet=NULL;

	for(i=0;i<4;i++){
        srand(time(NULL));
		vet[i] = rand() % 100;

		printf("sequencia",vet[i]);

	}

	return 0;
}
