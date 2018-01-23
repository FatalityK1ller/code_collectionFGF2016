#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 2
#define structTAM 30

typedef struct filmes{
    char name[structTAM];
    float rating;
    char style[structTAM];
    char actor[structTAM];
    int year;
}movie;


movie * dados(movie *c){
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
	c++;
    }
    return c;
}
movie * menu(movie *c){

int opcao;

    printf("CATALOGO DE FILMES \n");
    printf("1 - INSERÇÃO DE DADOS \n");
    printf("2 - LISTAR TODOS OS FILMES\n");
    printf("3 - ORDENAÇÃO POR AVALIAÇAO \n");
    printf("4 - ORDENAÇÃO POR NOME\n");
    printf("5 - LISTAR FILMES POR ANO DE LANÇAMENTO \n");
    printf("EScolha qual opcao do menu deseja acessar, digitando de 1 a 5\n");
    scanf("%d",&opcao);
    c++;
    return c;
}
movie * listarFilme(movie *c){

movie m[TAM];
int i;
            for(i=0;i<TAM;i++){
                printf("%s\n",c->name);
		printf("%s\n",c->style);
		printf("%s\n",c->actor);
		printf("%i\n",c->year);
		printf("%f\n",c->rating);
		c++;
            }
    return c;
}


movie * ordenar(movie *c){

int i,j;
movie aux;

          for(i=0;i<TAM;i++){
		for(j=0;j<TAM-1;j++){
			if(c->rating < (c+1)->rating){
				aux = *c;
				*c = *(c+1);
				*(c+1) = aux;
				c++;
			}
		}
  	}
	
	for(i=0;i<TAM;i++){
		printf("%s\n",c->name);
		printf("%s\n",c->style);
		printf("%s\n",c->actor);
		printf("%i\n",c->year);
		printf("%f\n",c->rating);
		c++;
	}
return c;
}

movie * ordenarSrt(movie *c){

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

    	 for(i=0;i<TAM;i++){
		printf("%s\n",c->name);
		printf("%s\n",c->style);
		printf("%s\n",c->actor);
		printf("%i\n",c->year);
		printf("%f\n",c->rating);
    	 }
return c;
}


movie * data(movie *c){
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
    return c;
}

int main(){

	movie a[TAM];
	movie *x=a;

	dados(a);
	menu(a);
	listarFilme(a);
	ordenar(a);
	ordenarSrt(a);
	data(a);
}
