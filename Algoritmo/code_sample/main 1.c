#include <stdio.h>
#include "ponto.h"

int main(){
	Ponto p, *l=&p;
	Ponto c, *m=&c;

	criaponto(l,3.2,7.5);
	vervalores(l);

	doispontos(l,m,3.2,4.5,2.4,3.4);
	vervalores2(l,m);
	
	quadrante(l,m,-3.2,-4.5,-2.4,3.4);
	vervalores2(l,m);

	trocaX(l,1.2);
	vervalores(l);

	trocaY(l,9.5);
	vervalores(l);
	
	soma(l,m,3.2,4.5,2.4,3.4);
	versoma(l,m);

	subtracao(l,m,3.2,4.5,2.4,3.4);
	versub(l,m);

	l=exclui(l);
	vervalores(l);

}


