#include <stdio.h>
#include "cabelo.h"
#include <string.h>

// Void para criar o cabelo
void cria_cabelo (Cabelo *c, char cor[10], char tipo[20], char natural[3], int tamanho){
  strcpy(c->cor, cor);
  strcpy(c->tipo, tipo);
  strcpy(c->natural, natural);
  c->tamanho = tamanho;
}

// Void para mostrar o cabelo
void ver_cabelo (Cabelo *c){
  printf ("\n \n Cor - %s \n", c->cor);
  printf ("Tipo - %s \n", c->tipo);
  printf ("Natural - %s \n", c->natural);
  printf ("Tamanho - %d \n \n", c->tamanho);
}

// Void par aeditar o cabelo e mostrar que mudou de estado
void edita_cabelo (Cabelo *c, char cor[10], int tamanho){
  strcpy(c->cor, cor);
  strcpy(c->natural, "Não");
  c->tamanho = tamanho;

}
