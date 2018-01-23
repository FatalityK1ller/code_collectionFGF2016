/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   filamovie.h
 * Author: cleilson
 *
 * Created on 20 de Janeiro de 2018, 18:17
 */



#define TAM 3
#define strucTAM 30
typedef struct filme{
	int movie[TAM];
	int inicio,fim;
}Filme;

Filme * criaFila();
void insere(Filme *f,int elem);
void retira(Filme *f);
void imprime(Filme *f);



