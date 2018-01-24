#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "geladeira.h"
// gcc -c ponto.c main.c -lm
// gcc -o prog ponto.o main.o -lm
// ./prog
int main(){
	geladeira p, *r=&p;

	

	criageladeira(r,"verde", "ferro", 30, 2000, 1.9);
	vergeladeira(r);
	
	trocacor(r,"azul");

	alterapreco(r, 3000);

	vergeladeira(r);
	return 0;
}
