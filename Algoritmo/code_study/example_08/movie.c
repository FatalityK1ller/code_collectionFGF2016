#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 2
#define structTAM 30

void dados(movie *c){

	int i;
    for(i=0;i<TAM;i++){
        printf("NOME DO FILME \n");
        fgets(c->name,30,stdin);
        printf("GENERO DO FILME \n");
        fgets(c->style,30,stdin);
        printf("NOME DO ATOR \n");
        fgets(c->actor,30,stdin);
        printf("ANO DE LANÇAMENTO \n");
        scanf("%d",&c->year);
        printf("RANKING DO FILME \n");
        scanf("%f",&c->rating);
        getchar();


}


void menu(movie *c){

	int opcao;

    	printf("CATALOGO DE FILMES \n");
    	printf("1 - INSERÇÃO DE DADOS \n");
    	printf("2 - LISTAR TODOS OS FILMES\n");
    	printf("3 - ORDENAÇÃO POR AVALIAÇAO \n");
    	printf("4 - ORDENAÇÃO POR NOME\n");
    	printf("5 - LISTAR FILMES POR ANO DE LANÇAMENTO \n");
    	printf("EScolha qual opcao do menu deseja acessar, digitando de 1 a 5\n");
    	scanf("%d",&opcao);

	swtich(opcao){
		case 1:
			dados(c);
		break;
		
		case 2:
			listarFilmes(c);
		break;

		case 3:
			ordenar(c);
		break;

		case 4:
			ordenarStr(c);
		break;

		case 5:
			data(c);
		break;
	}
			

}


void listarFilmes(movie *c){

	int i;
            for(i=0;i<TAM;i++){
                printf("%s\n",c->name);
		printf("%s\n",c->style);
		printf("%s\n",c->actor);
		printf("%i\n",c->year);
		printf("%f\n",c->rating);
		
            }

}

void ordenar(movie *c){

	int i,j;
	movie aux;

          for(i=0;i<TAM;i++){
		for(j=0;j<TAM-1;j++){
			if(c->rating < (c+1)->rating){
				aux = *c;
				*c = *(c+1);
				*(c+1) = aux;
			}
		}
	}

}


void ordenarStr(movie *c){

	int i,j;
	char temp[structTAM];

        for(i = 1; i < TAM; i++){
		for (j = 0; j < TAM-1; j++){
			if(strcmp(c->name,(c+1)->name) > 0){
				strcpy(temp,c->name);
				strcpy(c->name,(c+1)->name);
				strcpy((c+1)->name,temp);}                               
			}      
     		}
	}

}

void data(movie *c){

	int i,j;
	int ano;
            printf("INFORME O ANO DO FILME \n");
            scanf("%d",&ano);
            for(i=0;i<TAM;i++){
                if(ano == c->year){
                    printf("FILME : %s",c->name);
   		    printf("ANO : %d \n ",c->year);
                }
            }

}











