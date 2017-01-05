#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista *Cria_Lista(){
	return NULL;
}

Lista *Insere(Lista *l, int x){
	Lista * new_no = (Lista *) malloc(sizeof(Lista));
	new_no -> dado = x;
	new_no->prox = l;
	return new_no;
}



void Remove(Lista *l,int valor){

	Lista *aux01, *aux02;
	aux01 = l;
	aux02 = l -> prox;
	while(aux02 != NULL && aux02 -> dado != valor){
		aux01 = aux02;
		aux02 = aux02 -> prox;
	}
	if(aux02 != NULL){
		aux01 -> prox = aux02->prox;
		free(aux02);
	}
	
			
}

void Imprime(Lista *l){
	Lista *aux;
	for(aux = l; aux != NULL; aux = aux -> prox){
		printf("%d ", aux -> dado);
		printf("\n");	
	}
}
/*
Lista * busca(Lista *l,int x){
	if(l == NULL){
		return NULL;
	}
	if(l->dado == x){
		return l;
	}

	return busca(l->prox,x);
}*/
