#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
	
	Lista *l;

	l = crialista();
	
	l = insere(l,5);

	l = insere(l,10);

	l = insere(l,15);

	imprime(l);
	
	l = busca(l,10);

	l = retira(l,10);

	//l = insere(l,22);

	printf("REMOÇÃO DO ELEMENTO DA LISTA\n");

	imprime(l);
	
	l = imprimeinvertido(l);

	imprime(l);

	

	
}
