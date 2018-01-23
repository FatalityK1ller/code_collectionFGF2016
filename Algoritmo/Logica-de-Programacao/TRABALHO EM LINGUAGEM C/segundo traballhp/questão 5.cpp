#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char nome;
	char sexo[100];
	float altura;
	
	printf("Digite seu nome \n");
	scanf("%c",&nome);
	printf("ESCOLHA - [1]: MASCULINO OU - [2] : FEMININO %s\n");
	scanf("%s",&sexo);
	
	return 0;
}
