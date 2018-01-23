#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 2

struct filmes{
    char name[30];
    float rating;
    char style[30];
    char actor[30];
    int year;
};

typedef struct filmes movie;

int main(){
    movie m[TAM];
    int i,opcao,ano;
    char nome[20];
    float aval;

    for(i=0;i<TAM;i++){
        printf("NOME DO FILME \n");
        fgets(m[i].name,30,stdin);
               
        printf("GENERO DO FILME \n");
        fgets(m[i].style,30,stdin);
       
        printf("NOME DO ATOR \n");
        fgets(m[i].actor,30,stdin);
       
        printf("ANO DE LANÇAMENTO \n");
        scanf("%d",&m[i].year);

        printf("RANKING DO FILME \n");
        scanf("%f",&m[i].rating);
        getchar();
       
    }

	printf("CATALOGO DE FILMES \n");
	printf("1 - LISTAR TODOS OS FILMES \n");
	printf("2 - FILMES POR ORDEM DE AVALIAÇÃO \n");
	printf("3 - LISTAR FILMES POR ESTILO \n");
	printf("4 - LISTAR FILMES POR ANO DE LANÇAMENTO \n");
	printf("EScolha qual opcao do menu deseja acessar, digitando de 1 a 4\n");
	scanf("%d",&opcao);

	switch(opcao){

		case 1:
			for(i=0;i<TAM;i++){
				printf("%s\n",m[i].name);
			}
	
		case 2:
	
			printf("Informação o valor do rating para pesquisa \n");
			scanf("%7.2f",&aval);
			for(i=0;iTAM;i++){
				if(m[i].rating >= 5){
					printf("FILME : %s\n AVALIAÇÃO : %7.2f\n",m[i].name,m[i].rating);
					
				}
					
			}
		case 3:
			printf("INFORME O GENERO DO FILME \n");
			fgets(nome,20,stdin);
		
			for(i=0;i<strlen(nome);i++){
				if(nome[i] == m[i].style){
					printf("FILME : %s\n",m[i].style,m[i].name);
					
				}
				
			}
		case 4:
			printf("INFORME O ANO DO FILME \n");
			scanf("%d",&ano);

			for(i=0;i<TAM;i++){
				if(ano == m[i].year){
					printf("FILME : %s ANO : %d\n",m[i].name,m[i].year);
				}
			}
			

	}			    

    

    return 0;

}
