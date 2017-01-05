#include<stdio.h>
#include"fila.h"

#define TAM 10

void begin_fila(FILA *p) // inicializa
{
int elemento = p->begin;
p->end+=1;
	if(p->end == (-1))
	{
		printf("Digite o %d° elemento da fila: ", elemento + 1);
		scanf("%d", &p->vet[elemento]);
		elemento +=1;
		p->end+=1;
	}else{
	
		printf("Digite o %d° elemento da fila: ", p->begin + 1);
		scanf("%d", &p->vet[elemento]);
		elemento +=1;
		p->end+=1;
	}	


}
void insere_fila(FILA *p, int elem)
{

int elemento = p->end;
		printf("Digite o %d° elemento da fila: ", elemento + 1);
		p->vet[p->end] = elem;
		//elemento +=1;
		p->end +=1;


}
void retira_fila(FILA *p)
{
	if(p->begin > p->end)
	{
		printf("A FILA ESTÁ VAZIA!\n");

	}else{
		printf("A posição da fila (%d), o valor da posição (%d) a ser retirada.\n", p->begin, p->vet[p->begin]);
		p->begin +=1;
	}
}
int Op_fila(int num)
{
	printf("Digite um elemento: ");
	do{
		scanf("%d", &num);
	}while(num < 0 || num > 9);

return num;
}
void mostrar(FILA *p){
int i = p->end, j;
for(j=0;j<i;j++)
{
	printf("%d\n", p->vet[j]);
}

}
