#include "lista.h"
#include <stdio.h>

int main(){
	Lista *l;
	l = criaLista();
	l = insere(l,10);
	l = insere(l,15);
	
	l = retira(l,15);

	l = insere(l,5);
	l = insere(l,3);
	

	imprime(l);



}
