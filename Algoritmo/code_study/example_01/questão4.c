#include <stdio.h>

int main(){

	float valor,comissao;

	do{

		printf("Enter sales in dollars (-1 to end):\n");
		scanf("%f",&valor);

		comissao=valor*0.09+200;
		printf("%7.1f\n",comissao);
	}while(valor<0);

	return 0;
}
