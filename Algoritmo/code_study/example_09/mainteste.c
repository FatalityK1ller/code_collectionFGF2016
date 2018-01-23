#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "teste.h"
#define TAMANHO 5

int main(){
	
    Filme f, *a=&f;
   
    char valor[20];
    a->opcao = 0;
    a->inicio = 0;
    a->fim = 0;
    a->vazia = 1;
    while(a->opcao != 4){
        menu(a);
	getchar();
        switch(a->opcao){
        case 1:
            	printf("Digite a string: ");
            	fgets(valor,20,stdin);
            	adicionar(a,valor);
		fflush(stdin);
        	break;
        case 2:
            	strcpy(valor,retirar());
            	printf("Retirada a string %s da fila\n", valor);
        	break;
        case 3:
            	imprimir(a);
        case 4:
            	break;
        default:
            	printf("Opcao invalida!\n");
        }
    }
}

