#include <stdio.h>
#include "fila.h"

void menu(Fila *f){
  int opcao;
  int elemento;
    printf ("\nSeja bem vindo ao sistem de fila ! \n");
    printf (" Digite 1 para inserir na fila \n");
    printf (" Digite 2 para remover da fila \n");
    printf (" Digite 3 para imprimir toda fila \n");
    printf (" Digite 4 para encerrar o programa e exibir toda a fila \n");

    printf("Digite a opção : ");
    scanf ("%d", &opcao);

    inicia_fila(f);

    switch (opcao) {
      case 1:
        printf("\nVocê escolheu a opção 1, inserir na fila. ");
        printf ("\nDigite o valor a ser acrescentado na fila : ");

          scanf("%d", &elemento);
          insere_fila(f, elemento);

            menu(f);

        break;
      case 2:
        printf("Você escolheu a opção 2, remover da fila. ");
        remove_fila(f);

          menu(f);

        break;
      case 3:
        printf("Você escolheu a opção 3, imprimir toda a fila. ");
        imprime_fila(f);

          menu(f);

        break;
      case 4:
        printf("Você escolheu a opção 4, sair e imprimir a fila. ");
        imprime_fila(f);
        break;
    }
}
void inicia_fila(Fila *f){
  f->inicio = 0;
  f->fim = -1;
}

void insere_fila(Fila *f, int fila){
  f->fim++;
  f->fila[f->fim] = fila;
}

void remove_fila(Fila *f){
  if (f->inicio > f->fim){
    printf ("A pilha já está vazia !");
  }else {
    f->inicio++;
  }
}
void imprime_fila(Fila *f){
  int i, count = 0;
  for (i = f->inicio; i < f->fim; i++){
    count++;
    printf ("O %d número da fila é : %d", count, f->fila[i]);
  }
}
