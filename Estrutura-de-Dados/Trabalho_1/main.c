#include <stdio.h>
#include <stdlib.h>
#include "aviao.h"

int main(){

	Aviao p, *a=&p;

	criar(a,2.3,3.5,0);
	ver(a);

	cria2(a,"branco","TAM");
	ver2(a);

	alterar(a,0);
	verestado(a);

}
