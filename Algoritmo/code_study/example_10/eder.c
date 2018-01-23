#include "lista.h" 
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 

int filmQuant = 0; 
lista *noAux = NULL; 

lista* crialista(){     

return NULL; 

} 

lista* insere (lista *l, char nome[100], int ano){     

	if(l == NULL){         
		lista *novono = (lista *) malloc(sizeof(lista));         
		strcpy(novono->f.nome, nome);         
		novono->f.ano = ano;         
		novono->prox = l;         
		novono->ant = NULL;         
		noAux = novono; // Auxiliar pra função imprimeinvertido         
		filmQuant++;         
		return novono;     

	}else if(ano >= l->f.ano){         

		lista *novono = (lista *) malloc(sizeof(lista));         
		strcpy(novono->f.nome, nome);         
		novono->f.ano = ano;         
		novono->prox = l;         
		l->ant = novono;         
		novono->ant = NULL;         
		filmQuant++;         
		return novono;     

	}else{         
		lista *aux, *aux2;         
		aux2 = l;         
		int count = 0;         
		for(aux = l->prox; aux != NULL; aux = aux->prox){             
			if((ano >= aux->f.ano) && (count == 0)){                 
				lista *novono = (lista *) malloc(sizeof(lista));                 
				strcpy(novono->f.nome, nome);                 
				novono->f.ano = ano;                 
				aux2->prox = novono;                 
				novono->ant = aux2;                 
				novono->prox = aux;                 
				aux->ant = novono;                 
				filmQuant++;                 
				count++;             
			}
             		aux2 = aux2->prox;         
		}         
		if(count == 0){             
			lista *novono = (lista *) malloc(sizeof(lista));             
			strcpy(novono->f.nome, nome);             
			novono->f.ano = ano;             
			aux2->prox = novono;             
			novono->ant = aux2;             
			novono->prox = aux;             
			filmQuant++;         
		}         
		return l;     
	} 

} 

lista * apagarValor(lista *l, char nome[100]){     

	printf("***** Apagando %s... *****\n", nome);     
	lista *aux;     lista *aux2;     
	if(strcmp(nome, l->f.nome) == 0){         
		aux = l;         
		l = l->prox;         
		l->ant = NULL;         
		free(aux);         
		filmQuant--;         
		return l;     
	}else{         
		int count = 0;         
		aux2 = l;         
		for (aux=l->prox; aux!=NULL; aux=aux->prox){             
			if((strcmp(aux->f.nome, nome) == 0) && (count == 0)){                 
				aux2->prox = aux->prox;                 
				aux->prox->ant = aux2;                 
				free (aux);                 
				filmQuant--;                 
				count++;             
			}             
			aux2 = aux2->prox;         
		}         
	if(count == 0)             
		printf("O flme não está na lista.\n");         
		return l;     
	} 

} 


void imprime(lista *l){     

	lista *aux;     
	int count = 1;     
	for (aux=l; aux!=NULL; aux=aux->prox){         
		printf("\nFilme: %d - ", count);         
		printf("Nome: %s. - ", aux->f.nome);         
		printf("Ano: %d.\n", aux->f.ano);         
		count++;     
	}     
	printf("\n"); 
} 

void imprimeinvertido(lista *l){     

	lista *aux;     
	int count = filmQuant;     

	for (aux=noAux; aux!=NULL; aux=aux->ant){         
		printf("\nFilme: %d - ", count);         
		printf("Nome: %s. - ", aux->f.nome);         
		printf("Ano: %d.\n", aux->f.ano);         
		count--;     
	}     
	printf("\n"); 

}


