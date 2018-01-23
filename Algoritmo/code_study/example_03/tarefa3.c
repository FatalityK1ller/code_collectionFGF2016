#include <stdio.h>

int main(){

	float nota;

	printf("Digite o valor da nota do aluno \n");
	scanf("%f",&nota);
	
	(nota >=9.0 && nota <=10.0)?printf("CONCEITO A \n"):
	(nota >=8.0 && nota <=9.0)? printf("CONCEITO B \n"):
	(nota >=7.0 && nota <=8.0)? printf("CONCEITO C \n"):
	(nota >=6.0 && nota <=7.0)? printf("CONCEITO D \n"):
	(nota >=5.0 && nota <=6.0)? printf("CONCEITO E \n"):
	(nota < 5.0)? printf("CONCEITO F \n"):
	(nota < 0 && nota > 10)? printf("NOTA %f\n",nota): printf("ERRO VALOR FORA DO ESPECIFICADO \n");

	return 0;

}

  
