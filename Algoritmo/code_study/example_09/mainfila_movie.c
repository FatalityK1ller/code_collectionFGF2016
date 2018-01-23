#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fila_movie.h"
#define TAM 3
#define strucTAM 30


int main(){

	Filme f[TAM], *a=&f[0];
	int i;
	criaFila(a);	
	insere(a,"vingadores");
	insere(a,"demolidor");
	insere(a,"batman");
	
	retira(a);
	retira(a);
	insere(a,"formula");
	for(i=0;i<TAM;i++){	
		printf("print\t %s\n",f->nome);
	}

}
