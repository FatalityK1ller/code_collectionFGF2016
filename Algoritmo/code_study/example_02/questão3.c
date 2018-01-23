#include <stdio.h>

int main(){

	int x,y,soma=0,aux=0;

	for(x=1;x<=20;x+=2){
		soma=soma+x;

		printf("%d\n",soma);
		aux=aux+soma;

	}

	printf("%d total :",aux);

	return 0;

}
