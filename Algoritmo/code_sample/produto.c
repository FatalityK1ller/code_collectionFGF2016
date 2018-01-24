#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
#define structTAM 30


typedef struct Produto {
    int codigo;
    char nome[structTAM];
    float valor;
} Produto;

int main()
{
    printf("Cadastro de Produtos: \n");

    Produto prods[TAM];
    Produto aux;
    FILE *arq;
    FILE *sai;

	arq = fopen("produtos.txt","r");
	sai = fopen("produtos2.txt","w");

	int i,j;
	int codigo;
	char nome[structTAM];
	float valor;

    for(i = 0; i < TAM; i++){

		fscanf(arq,"%i %s %f",&codigo,nome,&valor);		
		prods[i].codigo = codigo;
		strcpy(prods[i].nome,nome);
		prods[i].valor = valor;	             
    }

    for(i=0; i< TAM; i++){
		for(j=i;j<TAM;j++){
			if(prods[i].valor < prods[i].valor){
				aux = prods[i];
				prods[i] = prods[j];
				prods[j] = aux;
			}
		} 
    }

   

    for(i = 0; i < TAM; i++)
    {
        printf("Produto %i :\n", i);
        printf("Código: %i \n", prods[i].codigo);
        printf("Nome: %s \n", prods[i].nome);
        printf("Valor: %f \n", prods[i].valor);

	fprintf(sai,"%i %s %f \n",prods[i].codigo,
				  prods[i].nome,
				  prods[i].valor);
    }

    return 0;
}
