/*
* Todos os comentários de modificações estão no Arquivo.h

Fabiano ajustando script de ver pilha
*/
#include <stdio.h>
#include "pilha.h"
#define TAM 5


/*inicializa um pilha vazia*/
void inicializa(Pilha *p){
	/*int i;
	int a = -1;
	p->topo = a;
	for(i=0;i<TAM;i++){
		p->pilha[i] = p->topo; feita por cleilson. modificado por jefferson.
	}*/
int i;

	if(p -> topo == (-1))
	{
		p -> topo++;
		i = p->topo;
		for(i; i < TAM; i++)
		{
			p->pilha[i] = 0;
		}
		printf("Digite um valor para a pilha: ");
		scanf("%d", &p -> pilha[p->topo]);
		p->topo++;
	}
	else
	{
		printf("Digite um valor para a pilha: ");
		scanf("%d", &p -> pilha[p->topo]);
	}

}
// inserindo todos os elementos da pilha. jefferson
Pilha *inserir_todos(Pilha *p){

int i = p -> topo;
for(i; i < TAM; i++)
{
	printf("Digite o %d° lemento: ", i+1);
	scanf("%d", &p->pilha[p->topo]);
	p->topo++;
}
printf("%d\n",p->topo);
return p;

}

/*visualiza uma pilha vazia - Ajustado por Fabiano*/
void ver(Pilha *p){
	int i;
	//p->pilha[TAM] = p->pilha[TAM]; feita por cleilson
	for(i=TAM;i>=0;i--){
		printf("%d\n",p->pilha[i]);
	}

	printf("-------------------------------\n");
}

/*insere um inteiro no topo da pilha*/
void insere(Pilha *p, int elem){
	/*p->topo = elem;
	p->pilha[0] = elem;*/ //feita por cleilson. modificado por jefferson.
	p->topo++;
	p->pilha[p->topo-1] = elem;

}
/*retira um elemento da pilha*/
void retira(Pilha *p){

	//p->pilha[0] = -1; feita por cleilson. modificado por jefferson.
	p->pilha[p->topo-1] = 0;
	p->topo--;
}

/*imprime o elemento do topo da pilha*/
void imprimetopo(Pilha *p){

	printf("Topo : %d\n",p->topo);

}

// opções de inserir todos os elementos. jefferson
void Op_inserir(Pilha *p){

int k , j = p->topo+1, b;

	printf("1. Inserir todos os dados da pilha.\n");
	printf("2. Para inserir apenas um elemento.\n");
	printf("Opçao -> ");
	do{
		scanf("%d", &k);
		if(k <= 0 || k >= 3)
		{ printf("Por favor, digite apenas um dos dois valores propostos.\n");}
	}while(1 > k || 2 < k);
	switch(k)
	{
		case 1:
			inserir_todos(p);
		break;
		case 2:
			printf("Digite um valor: ");
			scanf("%d", &b);
			insere(p, b);
		break;
	}

}
