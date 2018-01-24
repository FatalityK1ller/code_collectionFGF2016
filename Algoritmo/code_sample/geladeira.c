#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "geladeira.h"

void criageladeira(geladeira *q,char Cor[10],char Material[15], float Peso, float Preco, float Altura){	
	strcpy(q->cor,Cor);
	strcpy(q->material,Material);

	q->peso=Peso;
	q->preco=Preco;
	q->altura=Altura;
}

void trocacor(geladeira *q,char Cor[10]){
	strcpy(q->cor,Cor);
}

void alterapreco(geladeira *q,float Preco){
	q->preco=Preco;
}

void vergeladeira(geladeira *q){
	printf("\n\nGeladeira\n\n");
	printf("Cor: %s\n",q->cor);
	printf("Material: %s\n",q->material);
	printf("Preco: R$%.2f\n",q->preco);
	printf("Peso: %.2fKm\n",q->peso);
	printf("Altura: %.2fm\n",q->altura);
}
