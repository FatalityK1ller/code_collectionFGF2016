//Arquivo teste.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include "filastr.h"
#include <unistd.h>
#define LIMPA_TELA system("/usr/bin/clear")

//função apenas para garantis que o vetor inicie sem lixo
void zerar(Filme *f, int idx){
	int i;
	for(i = idx; i < TAMANHO; i++){
		strcpy(f[i].valor, ""); 
	}
}

void menu(){ 
	LIMPA_TELA;
        printf("1 - adicionar\n");
        printf("2 - retirar\n");
        printf("3 - imprimir\n");
        printf("4 - sair\n");
        printf("Digite a opcao: ");  
}

void adicionar(Filme *f){  
   if(fim == TAMANHO){  //Verifica se a fila já esta cheia, caso sim, impede de adicionar novos elementos
	printf("Fila Cheia\n");
	system("PAUSE");
	return;
   }else{
	printf("Digite a string: ");
	char filme[20];
    	getchar();
    	scanf("%[^\n]", filme);   
    	strcpy(f[fim].valor, filme);
    	fim++;
    }
}

void retirarFila(Filme *f){ //Implemtação para fila
	if(fim == 0){
         printf("Fila vazia\n");
	 zerar(f, 0); //Garantir a limpeza do vetor
	}else{
		int i;
		printf("Retirada a string %s da fila\n", f[inicio].valor);
		for(i = inicio; i < fim -1; i++){  //Ajustar o vetor para não ficar com espaços vazios
			f[i] = f[i + 1];
		}
		fim--;
		zerar(f, fim);
		imprimir(f);
	}
}

void retirarPilha(Filme *f){ //Implementação para pilha, muda apenas a chamada para essa função	
    if(fim <= 0){
	   printf("Fila vazia\n");
	   zerar(f, 0); //Garantir a limpeza do vetor
	}else{
       printf("Retirada a string %s da pilha\n", f[fim-1].valor);	   	
	   strcpy(f[fim-1].valor, "");
	   fim--;
	   imprimir(f);	
   }   	
}

void imprimir(Filme *f){
    if(fim == 0){
		printf("Fila Vazia\n");
	}else{
		int i;
		for(i = inicio; i < fim; i++ ){
			printf("%s\n", f[i].valor);
		}
	}
}

