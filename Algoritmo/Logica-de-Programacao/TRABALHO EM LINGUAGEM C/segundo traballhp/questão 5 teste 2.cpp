#include <stdio.h>
#include <string.h>

int main(){
	
	char sexo[30];
	char nome[30];
	float altura;
	
	printf("ESCOLHA [M] PARA HOMEM OU [F] PARA MULHER");
	scanf("%s",&sexo);
	
	printf("INFORME SUA ALTURA");
	scanf("%f",&altura);
	
	printf("Digite seu nome \n");
	scanf("%s",&nome);
	
	return 0;
}
