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



void buscaretira(Lista *l,int x){

	Lista *aux1, *aux2;
	aux1 = l;
	aux2 = l->prox;
	while(aux2 != NULL && aux2->dado != x){
		aux1 = aux2;
		aux2 = aux2->prox;
	}
	if(aux2 != NULL){
		aux1->prox = aux2->prox;
		free(aux2);
	}
	
			
			
}

void retirafim(Lista *l,int x){
	
	if(l->prox == NULL){
		printf("Lista está vazia\n");
	}
	else{
		Lista *ultimo = l->prox,
			*penultimo = l;
		while(ultimo->prox != NULL){
			penultimo = ultimo;
			ultimo = ultimo->prox;
		}
		penultimo->prox = NULL;
		free(ultimo);
	}
}

void retiraInicio(Lista *l, int x){

	if(l->prox == NULL){
		printf("Lista está vazia\n");
	}
	else{
		Lista *tmp = l->prox;
		l->prox = tmp->prox;
		free(tmp);
	}
}

int removerDado(int pos){

	 Lista *ptr, *antes;
	 Lista *inicio;
	
	if (inicio->prox == NULL){
      		return 0;  // Lista vazia !!!
  	}
  	else{   // Caso a lista nao esteja vazia
      		ptr = inicio->prox;
      		antes = inicio->prox;
      		while (ptr !=NULL){
	 		if (ptr->dado == pos){ // achou !!
	    			if (ptr == inicio->prox){ // se esta removendo o primeiro da lista
	    
	       				inicio = inicio->prox;
	       				free(ptr);
	       				return 1; // removeu !!
	    			}
	    			else{  // esta removendo do meio da lista
	    
	      				antes->prox = ptr->prox;  // Refaz o encadeamento
	      				free(ptr);                // Libera a area do nodo
	      				return 1;   // removeu !!
	    			}
	 		}
	 		else{  // continua procurando no prox. nodo
	 
	    			antes = ptr;
	    			ptr = ptr->prox;
	 		}
      		}
      		return 0; // Nao achou !!!
  	}

}
	
void imprime(Lista *l){
	Lista *aux;
	for(aux=l;aux!=NULL;aux=aux->prox){
		printf("%d ",aux->dado);
		printf("\n");	
	}
}

Lista * busca(Lista *l,int x){
	if(l == NULL){
		return NULL;
	}
	if(l->dado == x){
		return l;
	}

	return busca(l->prox,x);
}
