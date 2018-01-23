#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "teste.h"
#define TAMANHO 5


void menu(Filme *f){
	
    	printf("1 - adicionar\n");
    	printf("2 - retirar\n");
    	printf("3 - imprimir\n");
    	printf("4 - sair\n");
    	printf("Digite a opcao: ");
    	scanf("%d", &f->opcao);
	
}

void adicionar(Filme *f,char *dado){

	
    if(f->vazia == 1){
        strcpy(f->fila[f->fim], dado);
        f->fim++;
        f->vazia = 0;
    }
    else{
        if(f->inicio == f->fim){
            printf("Fila cheia!\n");
        }
        else{
            strcpy(f->fila[f->fim], dado);
            f->fim++;
            if(f->fim == TAMANHO){
                f->fim = 0;
	    }
        }
    }
}

char *retirar(){
	Filme *f;
	
    	char *valorParaRetornar = "";
	
    if(f->vazia == 1){
        printf("Fila vazia!\n");
    }
    else{
        valorParaRetornar = f->fila[f->inicio];
        f->inicio++;
        if(f->inicio == TAMANHO)
            f->inicio = 0;
        if(f->inicio == f->fim)
            f->vazia = 1;
    }

    return valorParaRetornar;
}

void imprimir(Filme *f){
    int i;
    int a = 0;
	
    i = f->inicio;
    if(f->vazia == 0){
        while(a==0){
            printf("%s - ",f->fila[i]);
            i++;
            if(i==TAMANHO){
                i=0;
	    }
            if(i==f->fim){
                a=1;
	    }
        }
        printf("\n");
    }
}
