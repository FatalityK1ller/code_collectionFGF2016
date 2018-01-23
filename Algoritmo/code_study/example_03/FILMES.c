#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 2
#define structTAM 30

struct filmes{
    char name[structTAM];
    float rating;
    char style[structTAM];
    char actor[structTAM];
    int year;
};
typedef struct filmes movie;



    movie m[TAM],aux;
    int c = TAM;
    //int i,opcao,ano,j;
    //char nome[structTAM];
    //float ordem;
    //char temp[structTAM];

void dados(int c){
	
	int i;
   
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

}

int menu(){

	int opcao;
	
    printf("CATALOGO DE FILMES \n");
    printf("1 - INSERÇÃO DE DADOS \n");
    printf("2 - LISTAR TODOS OS FILMES\n");
    printf("3 - ORDENAÇÃO POR AVALIAÇAO \n");
    printf("4 - ORDENAÇÃO POR NOME\n");
    printf("5 - LISTAR FILMES POR ANO DE LANÇAMENTO \n");
    printf("EScolha qual opcao do menu deseja acessar, digitando de 1 a 4\n");
    scanf("%d",&opcao);

    return opcao;
}


void listarFilme(int c){

	int i;

            for(i=0;i<TAM;i++){
                printf("%s\n",m[i].name);
		printf("%s\n",m[i].style);
		printf("%s\n",m[i].actor);
		printf("%i\n",m[i].year);
		printf("%f\n",m[i].rating);
		
            }
}
            

        
void ordenar(int c){
	int i,j;


          for(i=0;i<TAM;i++){
		for(j=0;j<TAM-1;j++){
			if(m[j].rating < m[j+1].rating){
				aux=m[j];
				m[j]=m[j+1];
				m[j+1]=aux;
			}
		}
	  }


	for(i=0;i<TAM;i++){
		printf("%s\n",m[i].name);
		printf("%s\n",m[i].style);
		printf("%s\n",m[i].actor);
		printf("%i\n",m[i].year);
		printf("%f\n",m[i].rating);
	}
		

}
			
       

void ordenarSrt(int c){

	int i,j;
	char temp[structTAM];

            for(i = 1; i < TAM; i++){
         	for (j = 0; j < TAM-1; j++){
                       
              		if(strcmp(m[j].name,m[j+1].name) > 0){
                	strcpy(temp,m[j].name);
                 	strcpy(m[j].name,m[j+1].name);
                 	strcpy(m[j+1].name,temp);}                               
           	}      
       	     }



	     for(i=0;i<TAM;i++){
			printf("%s\n",m[i].name);
			printf("%s\n",m[i].style);
			printf("%s\n",m[i].actor);
			printf("%i\n",m[i].year);
			printf("%f\n",m[i].rating);
	     }

}	
             
       

void data(int c){

	int i,j;
	int ano;

            printf("INFORME O ANO DO FILME \n");
            scanf("%d",&ano);

            for(i=0;i<TAM;i++){
                if(ano == m[i].year){
                    printf("FILME : %s",m[i].name);
		    printf("ANO : %d \n ",m[i].year);
                }
            }
           
}

int main(){

	int Menu, mEnu;

	do{

	Menu = menu();
	getchar();

	switch(Menu){

		case 1:
			dados(c);
		break;

		case 2:
			listarFilme(c);
		break;
		
		case 3:
			ordenar(c);

		break;

		case 4:
			ordenarSrt(c);
		break;

		case 5:
			data(c);
		break;

		default:
			printf("OPCAO INVALIDA\n");
		break;
	}
	
	printf("Fechar o programa? Digite\n Sim [1] / Nao [0]: ");
	scanf("%d", &mEnu);
	printf("\n");
	} while(mEnu != 1);


			

    return 0;
}
	

