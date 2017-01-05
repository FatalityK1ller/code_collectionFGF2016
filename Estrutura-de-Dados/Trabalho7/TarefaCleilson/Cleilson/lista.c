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



Lista * retira(Lista *l, int valor){
	Lista *aux;
	aux->dado;
	aux->prox;

	if(l->prox == NULL){
		printf("Lista vazia\n");
		return NULL;
	}
	else{
		Lista *aux = l->prox;
		l->prox = aux->prox;
		return aux;
		
	}	
	
			
}

void imprime(Lista *l){
	Lista *aux;
	for(aux=l;aux!=NULL;aux=aux->prox){
		printf("%d ",aux->dado);
		printf("\n");	
	}
}
