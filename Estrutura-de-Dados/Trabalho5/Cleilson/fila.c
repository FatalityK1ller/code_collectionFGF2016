#include <stdio.h>
#include "fila.h"
#define TAMANHO 5

void inicializa(Fila *f){

	f->inicio= 0;
	f->fim= -1;


}

void insere(Fila *f, int elem){

	f->fim++;
	if(f->fim > TAMANHO){
		printf("A fila esta cheia\n");
	}
	else{
		f->fila[f->fim]=elem;
	}
	

}

void retira(Fila *f){

	
	if(f->inicio > f->fim){
		printf("A fila esta vazia");	
	}
	else
		f->inicio++;
	

}


void imprimefila(Fila *f){

	int i;
	for(i=0;i < f->fim;i++){
		printf("%d",f->fila[i]);
	}


}
