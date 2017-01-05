#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "movie.h"
#define TAM 2
#define structTAM 30

int main(){

	movie Lista[TAM], *s = &Lista[0];
	s -> topo = (-1);
	menu(s);

	printf ("#################################");
	printf ("\n IMPRIMINDO TOPO \n");
	imprime_topo(s);

	printf("\n RETIRANDO ELEMENTO DA PILHA \n");	
	retira(s);

return 0;
}
