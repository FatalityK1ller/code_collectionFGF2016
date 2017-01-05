#include <stdio.h>
#include "cabelo.h"
#include <string.h>

int main(){

  //Criando ponteiro para cabelo
  Cabelo x, *c=&x;

  //Criação de cabelo
  cria_cabelo (c, "Azul", "Liso", "Sim", 20);

  //Mostra o cabelo criado
  ver_cabelo (c);


  //Edita o cabelo
  edita_cabelo (c, "Vermelho", 15);

  //mostra o cabelo criado
  ver_cabelo(c);

}
