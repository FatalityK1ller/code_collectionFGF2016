//Faça uma lista duplamente encadeada, uma pilha 
// Pilha -	struct no{ 
// 			int dado;
//			struct no *topo,*prox,*ant;
// As operações não retornam estrutura - operações void
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void inicio(Lista *l){
	l = NULL;
	
}

void insere(Lista *l,int x){
	Lista * aux = (Lista *) malloc(sizeof(Lista));
	if(l != NULL)  l->prox = aux;
	  aux->dado = x;
		aux->prox = NULL;
		aux->ant = l;	
		aux->topo = aux;
		l = aux;	
	
}

void imprime(Lista *l){
	
	Lista *aux;
	for(aux=l;aux!=NULL;aux=aux->prox){
		printf("%d",aux->dado);
		printf("\n");
	}
}

void retira(Lista *l){

	Lista *aux;
	l->topo = aux->topo;
	free(aux);
	
	

}
