#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "teste.h"
#define TAMANHO 5


void menu(Filme *f){
	
	f->opcao = 0;
	f->inicio = 0;
	f->fim = 0;
	f->vazia = 1;
	
    	printf("1 - adicionar\n");
    	printf("2 - retirar\n");
    	printf("3 - imprimir\n");
    	printf("4 - sair\n");
    	printf("Digite a opcao: ");
    	scanf("%d", &f->opcao);

	while(f->opcao != 4){
        
		switch(f->opcao){
			case 1:
			    	printf("Digite a string: ");
			    	scanf("%s",f->valor);
			    	adicionar(f,f->valor);
				break;
			case 2:
			    	strcpy(f->valor, retirar(f->valor));
			    	printf("Retirada a string %s da fila\n", f->valor);
				break;
			case 3:
			    	imprimir(f);
			case 4:
				break;
			default:
			    	printf("Opcao invalida!\n");
		}
    	}
	
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
            if(f->fim == TAMANHO)
                f->fim = 0;
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
