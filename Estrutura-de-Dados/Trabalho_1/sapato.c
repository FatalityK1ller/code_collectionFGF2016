#include<stdio.h>
#include"sapato.h"
#include<string.h>
#define TAM 15


SAPATO *sexo_m_f(SAPATO *s){
int i;

	do{
		printf("Digite 1 ara masculno e 2 paa feminino.\n");
		scanf("%d", &i);
	}while(i!=1 && i!=2);
	switch(i){
		case 1:
			strcpy(s -> tipo_sexo, "MASCULINO");
		break;

		case 2:
			strcpy(s -> tipo_sexo, "FEMININO");
		break;
	
	}
return s;

}


SAPATO *cor(SAPATO *c){

int i;
	do{
		
		printf("Digite um do números corresponentes.\n");
		printf("1. Vermelho.\n");
		printf("2. Preto.\n");
		printf("3, Branco.\n");
		scanf("%d", &i);

	}while(i!=1 && i!=2 && i!=3);

	switch(i)
	{
		case 1:
			strcpy(c -> cor, "VERMELHO");
		break;

		case 2:
			strcpy(c -> cor, "PRETO");
		break;

		case 3:
			strcpy(c -> cor, "BRANCO");
		break;
	}

return c;

}


void R_Dados(SAPATO *p){

	sexo_m_f(p);
	printf("Digite a marca do sapato que você deseja:\n");
	fgets(p -> marca, TAM, stdin);
	cor(p);
	printf("Digite o tamanho número do sapto: ");
	scanf("%d", &p -> numero);
	printf("Digite o preço do sapato: ");
	scanf("%f", &p -> valor);
	
}

void M_DADOS(SAPATO *p){

printf("%s",p->tipo_sexo);
printf("%s",p->marca);
printf("%s",p->cor);
printf("%d\n", p->numero);
printf("%2.2f\n", p->valor);

}

SAPATO *TROCA_SAPATOS(SAPATO *q){
int i;
	printf("Digite o número que você deseja trocar.\n");
	printf("Valor atul d nùmero qu você escolheu %d.", q -> numero); 
	printf("Novo valor: ");
	scanf("%d", &q -> numero);

	do{
		printf("Deseja alterar acor do sapato?\n");
		printf("Digite 1 para sim.\n");
		printf( 2 para nao.\n");
		scanf("%d", &i);

	}while(i!=1&&i!=2);
if(i = 1){
	cor(q);
}
return q;
}












