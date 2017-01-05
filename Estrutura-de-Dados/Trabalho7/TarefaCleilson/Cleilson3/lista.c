#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista* criaLista(){
	return NULL;
}

Lista * insere(Lista *l,int x){
	Lista * novono = (Lista *) malloc(sizeof(Lista));
	novono->dado = x;
	novono->prox = l;
	return novono;
}



void * retira(Lista *l){
	Lista *aux;
	aux = l->prox;
	l->prox = aux->prox;
	free(aux);
			
}

void imprime(Lista *l){
	Lista *aux;
	for(aux=l;aux!=NULL;aux=aux->prox){
		printf("%d ",aux->dado);
		printf("\n");	
	}
}

Lista * busca(Lista *l,int x){
	Lista *aux;
	aux = l;
	while(aux != NULL && aux->dado != x){
		aux = aux->prox;
		return aux;
	}

	
}
