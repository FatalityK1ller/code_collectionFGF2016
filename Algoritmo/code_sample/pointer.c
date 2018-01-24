#include <stdio.h>
#define TAM 3
#define TAMstruct 100

typedef struct pessoa{
	char nome[TAMstruct];
	int idade;
}Pessoa;

void * preenche(Pessoa *p){

	
	for(int i=0; i<TAM; i++){
		(*p)++;

		printf("Digite o nome da pessoa %d\n",i+1);
		/*scanf("%s",&p->nome);*/
		gets(p->nome);
		printf("Digite idade da pessoa %d\n",i+1);
		scanf("%d",&p->idade);
		getchar();
		*p=*p;
		p++;
		/*(*p)++; wrong type argument to increment */

		
	}
}

void * ordena(Pessoa *p){
	for(int i=0; i<TAM; i++){
		for(int j=0; j<TAM-1; j++){
			if(p[j].idade > p[j+1].idade){
				Pessoa aux = p[j];
				p[j] = p[j+1];
				p[j+1] = aux;
			}
		}
	}
}

void imprime(Pessoa *p){
	for(int i=0; i<TAM; i++){
		printf("%s - %d\n",p[i].nome, p[i].idade);
	}
}

int main(){
	Pessoa a[TAM];
	Pessoa *x=a;

	preenche(x);
	imprime(x);

	ordena(x);

	imprime(x);
}


	
