#include "sapato.h"
#include<string.h>
#include<stdio.h>

void criaSapato1(sapato *p, int num, int est, float pes, float val){
	p->numero = num;
	p->estado = est;
	p->peso = pes;
	p->valor = val;
}

void criaSapato2(sapato *p){
	printf("Digite a Marca do Sapato: ");
	fgets(p->marca,30,stdin);
	printf("Digite o Material do Sapato: ");
	fgets(p->material,30,stdin);
	printf("Digite a Cor do Sapato: ");
	fgets(p->cor,20,stdin);
	getchar();
}


void alteraNum(sapato *p, int num){
	p->numero = num;
}

void alteraPeso(sapato *p, float pes){
	p->peso = pes;
}
void alteraValor(sapato *p, float val){
	p->valor = val;
}
void alteraEstado(sapato *p, int est){
	p->estado = est;
}
void verEstado(sapato *p){
	if(p->estado==0)
		printf("O sapato esta Novo\n");
	else
		printf("O sapato esta Usado\n");
}
void verSapato1(sapato *p){
	printf("NUMERO: %d\n",p->numero);
	printf("VALOR: %f\n",p->valor);
	printf("PESO: %f\n",p->peso);	
}

void verSapato2(sapato *p){
	printf("COR: %s\n",p->cor);
	printf("MARCA: %s\n",p->marca);
	printf("MATERIAL: %s\n",p->material);
}
