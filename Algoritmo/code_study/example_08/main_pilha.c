#include <stdio.h>
#include "pilha.h"
#define TAM 10


int main(){

	Pilha p, *a=&p;

	inicializa(a);
	ver(a);

	insere(a,2);
	ver(a);

	retira(a);
	ver(a);

	imprimetopo(a);


}
