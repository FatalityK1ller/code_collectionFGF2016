#include <stdio.h>

int main(){
	float a,b,soma,sal;
	char nome;
	soma=0;
	
	printf("Digite a quantidade de funcionarios\n");
	scanf("%f",&a);
	
	for(b=1;b<=a;b++){
		printf("digite o salario\n");
		scanf("%f",sal);
		soma=soma+sal;
	}
	
	printf("A soma dos salarios digitados e :%7.2f\n",soma);
	return 0;
}
