#include<stdio.h>
#include "sapato.h"
#include<string.h>

int main(){
	sapato novo, *s=&novo;
	
	criaSapato1(s,38,0,300.6,30.5);
	criaSapato2(s);

	verSapato1(s);
	verSapato2(s);
	
	verEstado(s);

	alteraEstado(s,5);

	verEstado(s);
	

	return 0;
}
