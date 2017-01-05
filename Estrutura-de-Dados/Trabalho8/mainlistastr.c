//Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listastr.h"
#include <unistd.h>
#define LIMPA_TELA system("/usr/bin/clear")
//Máximo de bytes para uma String
#define BUFFER 64
  
//Espera 3 segundos
#define ESPERA sleep(3)

//---------------------------------
//     Função Principal
//---------------------------------
  
int main(void) {

	Dados *principal = NULL;
	Dados f, *a=&f;
    char escolha;
    int chave=0;
    //Laço que irá mostrar o menu esperando uma opção (char)
    do {
        //Limpando a tela, e mostrando o menu lembrando que primeiramente, os itens estão bloqueados até que seja criada uma lista vazia
        LIMPA_TELA;
        fprintf(stdout, "\n\t\tCadastro de Pessoas\n\n");
        fprintf(stdout, "Escolha uma opcao: \n");
        fprintf(stdout, "1 - Criar lista vazia\n");
        if(chave==1){
            fprintf(stdout, "2 - Inserir no Inicio de uma lista\n");
            fprintf(stdout, "3 - Inserir no Fim de uma lista\n");
        }
        fprintf(stdout, "4 - Lista Vazia...\n");
        if(chave==1){
            fprintf(stdout, "5 - Exibir dados do primeiro elemento\n");
            fprintf(stdout, "6 - Exibir dados do ultimo elemento\n");
            fprintf(stdout, "7 - Exibir todos os valores da Lista\n");
            fprintf(stdout, "8 - Exibir o tamanho da Lista\n");
            fprintf(stdout, "9 - Eliminar primeiro elemento\n");
            fprintf(stdout, "a - Eliminar último elemento\n");
            fprintf(stdout, "b - Eliminar elemento buscado\n");
            fprintf(stdout, "c - Busca Dados\n");
        }
        fprintf(stdout, "d - Sair\n\n");
        fprintf(stdout, "Resposta: ");
        scanf("%c", &escolha);
        //Se a chave for diferente de zero, porém a escolha for diferente de 1, 4 e d, a escolha será z (opção inválida)
        if((chave==0)&&((escolha!='1')&&(escolha!='d')&&(escolha!='4')))
            escolha='z';
  
        switch(escolha) {
            //Criando lista vazia
            case '1':
                chave=1;
                criavazia(); 
                break;
            //Inserindo no início
            case '2':
                insereinicio();
                break;                
            //Inserindo no final
            case '3':
                //Se a lista não estiver vazia
                if(principal!=NULL){
                    inserefim();
                }
                //senão inclui no inicio
                else{
                    insereinicio();
                }
                break;
            //Checando se a lista está vazia
            case '4':
                listavazia();
                break;
            //Mostrando Primeiro elemento
            case '5':
                prielemento();
                break;
            //Mostrando Último elemento
            case '6':
                ultelemento();
                break;
            //Exibindo todos elementos
            case '7':
                exibe();
                break;
            //Exibindo tamanho da lista
            case '8':
                exibetam();
                break;
            //Deleta primeiro elementos
            case '9':
                deletapri();
                break;                
            //Deleta último elemento
            case 'a':
                deleta();
                break;
            //Deleta elemento buscado
            case 'b':
                delbusca();
                break;                
            //Buscando elementos
            case 'c':
                busca();
                break;
            //Saindo e finalizando o programa
            case 'd':
                fprintf(stderr,"Obrigado por utilizar esse programa!\n");
                fprintf(stderr,"------>Terminal de Informação<------\n\n");
                ESPERA;
                exit(0);
                break;
            //Se foi algum valor inválido
            default:
                fprintf(stderr,"Digite uma opcao valida (pressione -Enter- p/ continuar)!\n");
                getchar();
                break;
        }
        //Impedindo sujeira na gravação da escolha
        getchar();
    }
    while (escolha > 0); //Loop Infinito
    return 0;
}
