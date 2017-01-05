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
	aux->dado = valor;
	
 	
 		if(l->dado == aux->dado){
			//aux = l->prox;
			l->prox = aux->prox;
			return aux;
		}
		else{
			return NULL;
		}	
		
 			
 }
 
 void imprime(Lista *l){
 	Lista *aux;
 	for(aux=l;aux!=NULL;aux=aux->prox){
 		printf("%d ",aux->dado);
 		printf("\n");	
 	}
 }

Lista * scaner(Lista *l){
	Lista *aux;
	for(aux=l;aux!=NULL;aux=aux->prox){
		if(aux == l){
			aux=l->prox;
			return aux;		
		}
		else{
			return NULL;
		}
	}
}
