//Faça uma lista duplamente encadeada, uma pilha 
// Pilha -	struct no{ 
// 			int dado;
//			struct no *topo,*prox,*ant;
// As operações não retornam estrutura - operações void
#include <stdio.h>
#include <stdlib.h>
#include "listap.h"

int main(){

	Lista *l;

	inicio(l);

	insere(l,5);

	insere(l,6);

	insere(l,9);

	imprime(l);



}

    
