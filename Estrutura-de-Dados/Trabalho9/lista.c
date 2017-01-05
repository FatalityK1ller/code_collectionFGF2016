#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista * crialista(){
	return NULL;
}

Lista * insere(Lista *l,int x){
	Lista * novono = (Lista *) malloc(sizeof(Lista));
	if(l!=NULL)	l->ant=novono;
	novono->dado = x;
	novono->prox = l;
	novono->ant = NULL;
	return novono;
}

Lista * retira(Lista *l,int valor){
	Lista *aux = buscaelemento(l,valor);	
	if(aux == NULL){
		return NULL;	
	}
	if(aux == l){
		l->prox;
		l->ant = NULL;
		free(aux);
	}
	else{
		(aux->ant)->prox = aux->prox;
		(aux->prox)->ant = aux->ant;
		free(aux);
		return aux;
	}

}

void imprime(Lista *l){
	Lista *aux;
	for(aux=l;aux!=NULL;aux=aux->prox){
		printf("%d",aux->dado);
	printf("\n");
	}
}

void imprimeinvertido(Lista *l){
	Lista *aux;
	for(aux=l;aux!=NULL;aux=aux->ant){
		printf("%d",aux->dado);
	printf("\n");
	}
}

Lista * buscaelemento(Lista *l,int valor){
	Lista *aux;
	for(aux=l;aux!=NULL;aux=aux->prox){
		if(l->dado == valor ){
			aux->dado = l->dado;
			return aux;
		}
		else{
			return NULL;
		}
	}	
}


