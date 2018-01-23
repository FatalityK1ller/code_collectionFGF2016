#include <stdio.h>

int main(){

	int soma, mult, sub, div;
	int opcao,num1,num2;
	
	printf("1 -SOMA \n");
	printf("2 - MULTIIPLICAÇÃO \n");
	printf("3 - DIVISÃO \n");
	printf("4 - SUBTRAÇÃO \n");
	printf("ESCOLHA SUA OPÇÃO DE CALCULO \n");
	scanf("%d",&opcao);

	switch(opcao){
		case 1:
			printf("informe os dois dois numeros a serem calculados \n");
			scanf("%d%d",&num1,&num2);
			soma=num1+num2;
			printf("RESULTADAO DA SOMA : %d\n",soma);
			break;
		case 2:
			printf("informe os dois dois numeros a serem calculados \n");
			scanf("%d%d",&num1,&num2);
			soma=num1*num2;
			printf("RESULTADAO DA MULTIPLICAÇÃO : %d\n",soma);
			break;
		case 3:
			printf("informe os dois dois numeros a serem calculados \n");
			scanf("%d%d",&num1,&num2);
			soma=num1/num2;
			printf("RESULTADAO DA DIVISÃO : %d\n",soma);
			break;
		case 4:
			printf("informe os dois dois numeros a serem calculados \n");
			scanf("%d%d",&num1,&num2);
			soma=num1-num2;
			printf("RESULTADAO DA SUBTRAÇÃO : %d\n",soma);
			break;
	}
	
	return 0;

}

