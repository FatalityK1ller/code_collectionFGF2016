//Arquivo main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filastr.h"
#include <unistd.h>
#define LIMPA_TELA system("/usr/bin/clear")

int inicio, fim;

int main(){
    
    zerar(filmes, 0);
    
    int opcao = 0;
	
    while(opcao != 4){
    	LIMPA_TELA;
        menu();
        scanf("%d", &opcao);
        
        switch(opcao){
        case 1:
            adicionar(filmes);      		
            break;
        case 2:        	
	    retirarFila(filmes);
            
            break;
        case 3:
            imprimir(filmes);
            
            break;
        case 4:
        	printf("Encerrando o sistema\n");
        	break;
        default:
        	printf("Opcao invalida!\n");
        	getchar();
        	break;		              
        }
    }
    
    return 0;
}

