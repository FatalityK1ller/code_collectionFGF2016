#include <stdio.h>
#include <stdlib.h>
#include "aviao.h"

void criar(Aviao *p,float x,float y,int k){

	p->tamanho=x;
	p->peso=y;
	p->estado=k;
}

void ver(Aviao *p){

	printf("Tamanho %f\n",p->tamanho);
	printf("Peso %f\n",p->peso);
	printf("Estado %d\n",p->estado);
	
}

void cria2(Aviao *p, char z[50], char w[50]){

	printf("Cor do aviao \n");
	fgets(p->cor,50,stdin);
	printf("Empresa do aviao \n");
	fgets(p->empresa,50,stdin);
	fflush(stdin);
}

void ver2(Aviao *p){

	printf("Cor %s\n",p->cor);
	printf("Empresa %s\n",p->empresa);
}

void alterar(Aviao *p,int k){

	p->estado=k;
}

void verestado(Aviao *p){

	if(p->estado==0){
		printf("FUNCIONANDO \n");
	}
	else{
		printf("PARADO \n");
	}
}


	
