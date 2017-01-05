#include"opore.h"
#include<stdio.h>
#include<string.h>
#define tm 20

char vet[]={'*','/','+','-'};

void Inicializa(Opera *p){
printf("Digite a equação: ");
fgets(p->equa, tm, stdin);
p->topo = 0;
}

Opera *Scanner(Opera *p){
int i, j;
for(i = 0;i<tm;i++){
	for(j=0;j<=3;j++){
		if(p->equa[i] == vet[j]){
			p->pilha[p->topo] = vet[j];
			p->topo++;
		}
	}
}

return p;
}

void Mostrar(Opera *p){
int i, j, k=0;
char aux;
j = strlen(p->equa);
	for(i = 0; i < j-1/*tm-1*/; i++){
		
		if(p->equa[i] == ')'){
			if(p->equa[i+1] == ')'){
				aux= p->pilha[k+1];
				p->pilha[k+1] = p->pilha[k];
				p->pilha[k] = aux;
				printf("%c", p->pilha[k]);		
				k++;
			}else{
				printf("%c", p->pilha[k]);		
				k++;
			}
		}else if(p->equa[i] !=  '(' && p->equa[i] !=  '+' && p->equa[i] !=  '-' && p->equa[i] !=  '/' && p->equa[i] !=  '*'){
 
			printf("%c", p->equa[i]);
		
		}
	}
	printf("\n");

	

}
