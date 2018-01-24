#include <stdio.h>
#include <string.h>

int main(){

	char nome[5];
	char nome2[5];
	int i,compara;

	printf("Digite um nome para a string\n");
	fgets(nome,5,stdin);
	getchar();

	printf("Digite outro nome para segunda string\n");
	fgets(nome2,5,stdin);
	getchar();

	compara=strcmp(nome,nome2);

	
		if(compara < 0){
			printf("A string numero 1 eh maior");
		}
		if(compara > 0){
			printf("A string numero 2 eh maior");
		}
		if(compara == 0){
			printf("As strings sao iguais");
		}

	

	return 0;

}
		
