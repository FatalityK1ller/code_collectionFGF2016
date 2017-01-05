#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fila_movie.h"
#define TAM 3
#define strucTAM 30
void main(){

	Filme f,*a=&f;
	inicia(a);
	insere(a,20);	
	insere(a,30);
	insere(a,40);
	imprime(a);
	retira(a);
	retira(a);
	imprime(a);
	insere(a,50);
	imprime(a);
	

}
