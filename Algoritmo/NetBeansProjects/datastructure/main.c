/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: cleilson
 *
 * Created on 20 de Janeiro de 2018, 18:14
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "filamovie.h"
#define TAM 3
#define strucTAM 30
void main(){

	Filme f,*a=&f;
	inicia(a);
	insere(a,20);
	insere(a,30);
	insere(a,40);
	imprime(a);
	retira(a);
	retira(a);
	imprime(a);
	insere(a,50);
	imprime(a);


}

