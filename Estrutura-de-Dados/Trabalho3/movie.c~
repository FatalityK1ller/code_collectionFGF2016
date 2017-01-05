#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "movie.h"
#define TAM 2
#define structTAM 30

void dados_todos(movie *c){

int i;
	if(c -> topo == (-1)){

		c -> topo++;
		getchar();

			for(i = 0 ; i < TAM ; i++){

				printf("NOME DO FILME: ");
				fgets(c -> name , structTAM , stdin);
				printf("GENERO DO FILME: ");
				fgets(c->style , structTAM , stdin);
				printf("NOME DO ATOR: ");
				fgets(c->actor, structTAM , stdin);
				printf("ANO DE LANÇAMENTO: ");
				scanf("%d", &c->year);
				printf("RANKING DO FILME: ");
				scanf("%f", &c->rating);
				c -> topo++;
				getchar();
			}

		}else{

			for(i = 0 ; i < TAM ; i++){

				printf("NOME DO FILME: ");
				fgets(c -> name , structTAM , stdin);
				printf("GENERO DO FILME: ");
				fgets(c->style , structTAM , stdin);
				printf("NOME DO ATOR: ");
				fgets(c->actor, structTAM , stdin);
				printf("ANO DE LANÇAMENTO: ");
				scanf("%d", &c->year);
				printf("RANKING DO FILME: ");
				scanf("%f", &c->rating);
				c -> topo++;
				getchar();
			}

		}

}

//Imprime topo Fabiano
void imprime_topo(movie *c){

	printf("%s", c -> name);
	printf("%s", c -> style);
	printf("%s", c -> actor);
	printf("%i\n", c -> year);
	printf("%f\n", c -> rating);

}

void menu(movie *c){

	int opcao, aux;

    	printf("CATALOGO DE FILMES \n");
    	printf("1. INSERÇÃO DE DADOS \n");
	printf("2. VIZUALIZAR FILME \n");
	printf("3. IMPRIMIR TOPO \n");
	printf("4. EXCLUIR FILME \n");
    	do{

	    	scanf("%d",&opcao);

			if(opcao <= 0 || opcao > 4)
			{
				printf("Por favor, digite somente um dos valores mencionados!\n");
			}
	}while(1 > opcao || 3 < opcao);

	switch(opcao){
		case 1:
			printf("DESEJA INSERIR TODOS OS DADOS DA PILHA DE FILMES? \n");
			printf("1. PARA TODOS\n");
			printf("2. PARA APENAS INSERIR UM FILME NA PILHA \n");
			do{
				scanf("%d", &aux);

					if(aux <= 0 || aux >= 3)
					{
						printf("Por favor digite apenas um entre os dois valores!\n");
					}

					}while(aux < 1 || aux > 2);

						if(aux == 1)
						{
							dados_todos(c);
						}
						if(aux == 2)
						{
							dados_pilha(c);
						}

		break;

		case 2:
			listarFilmes(c);
		break;

		case 3:
			//Implementar parte que exclui o topo
		break;


	}


}

// modificações no códico. jefferson. quando a variável for lia do tipo string, o %s não precisa de '\n' pois o compilador já salta uma linha automaticamente.
void listarFilmes(movie *c){

	int i;
            for(i = 0 ; i < TAM ; i++){

               	printf("NOME %s\n", c -> name);
		printf("GÊNERO %s", c -> style);
		printf("ATOR %s", c -> actor);
		printf("ANO %i\n", c -> year);
		printf("RANING %f\n", c -> rating);

            }

}

void dados_pilha(movie *c){

	if(c -> topo == (-1))
	{
			c -> topo++;
			printf("NOME DO FILME: ");
			getchar();
			fgets(c -> name , structTAM , stdin);
			printf("GENERO DO FILME: ");
			fgets(c->style , structTAM , stdin);
			printf("NOME DO ATOR: ");
			fgets(c->actor, structTAM , stdin);
			printf("ANO DE LANÇAMENTO: ");
			scanf("%d", &c->year);
			printf("RANKING DO FILME: ");
			scanf("%f", &c->rating);
			c -> topo++;
			getchar();

	}else{
			printf("NOME DO FILME: ");
			fgets(c -> name , structTAM , stdin);
			printf("GENERO DO FILME: ");
			fgets(c->style , structTAM , stdin);
			printf("NOME DO ATOR: ");
			fgets(c->actor, structTAM , stdin);
			printf("ANO DE LANÇAMENTO: ");
			scanf("%d", &c->year);
			printf("RANKING DO FILME: ");
			scanf("%f", &c->rating);
			c -> topo++;
			getchar();
		}
}

/*Inicio da implementação de exclusão de um elemento da pilha*/
void retira(movie *c){

	c->name[c->topo - 1] = 0;
	c->topo--;
	listarFilmes(c);	

}


