#include <stdio.h>
#include "pilha.h"
#define TAM 10

/*inicializa um pilha vazia*/
void inicializa(Pilha *p){

	int i;
	int a = -1;	
	p->topo = a;
	for(i=0;i<TAM;i++){
		p->pilha[i] = p->topo;
	}
	

}

/*visualiza uma pilha vazia*/
void ver(Pilha *p){

		
	int i;
	p->pilha[TAM] = p->pilha[TAM];
	for(i=0;i<TAM;i++){
		printf("%d\n",p->pilha[i]);
	}

	printf("-------------------------------\n");
		
}

/*insere um inteiro no topo da pilha*/
void insere(Pilha *p, int elem){

	p->topo = elem;
	p->pilha[0] = elem;

}

/*retira um elemento da pilha*/
void retira(Pilha *p){

	p->pilha[0] = -1;
}

/*imprime o elemento do topo da pilha*/
void imprimetopo(Pilha *p){

	printf("Topo : %d\n",p->topo);

}


