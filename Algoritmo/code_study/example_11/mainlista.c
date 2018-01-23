#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

	Lista *l;

	l = crialista();

	l = insere(l,5);

	l = insere(l,10);

	l = insere(l,15);

	l = buscaelemento(l,10);

	l = retira(l,10);

	imprime(l);
	
	imprimeinvertido(l);
	
	imprime(l);

	





}
