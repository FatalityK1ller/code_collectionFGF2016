/*
* Todos os comentários de modificações estão no Arquivo.h
Ajustado por Fabiano
*/
#include <stdio.h>
#include "pilha.h"
#define TAM 5


int main(){


	Pilha p, *a=&p;
	a->topo = (-1);

	inicializa(a);

	printf ("\n \n ##################### OPÇÕES DE INSERIR ################### \n \n");
	Op_inserir(a);
	//insere(a, number);
	//inserir_todos(a);
	printf ("\n \n ##################### VISUALIZA INSERIDO ################### \n \n");
	ver(a);

	printf ("\n \n ##################### RETIRA TOPO ################### \n \n");
	retira(a);
	ver(a);


	printf ("\n \n ##################### IMPRIME TOPO ################### \n \n");
	imprimetopo(a);

}
