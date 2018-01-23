#include <stdio.h>

int main(){
	int a;
	float qtd,sal,soma;
	char nome;
	
	printf("digite quantidade de funcionarios :\n");
	scanf("%f",&qtd);
	
	printf("digite nome :\n");
	fflush(stdin);
	scanf("%c",&nome);
	
	printf("Infomre salario :\n");
	fflush(stdin);
	scanf("f",&sal);
	
	for(a=1;a<=qtd;a++){
		soma=sal+qtd;
	
	
	}
	
		printf("soma eh :\n",soma);
	return 0;
		
	
}
