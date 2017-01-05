#include <stdio.h>
#include "fila.h"
#define TAMANHO 5

int main(){

	Fila f, *a=&f;


	inicializa(a);

	insere(a,2);

	insere(a,5);

	retira(a);

	imprimefila(a);


}
