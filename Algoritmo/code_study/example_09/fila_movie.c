#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "fila_movie.h"
#define TAM 3
#define strucTAM 30

void criaFila(Filme *f){

	f->inicio =0;
	f->fim = -1;

}
//vetor circular 
void insere(Filme *f,char n[strucTAM]){

	int i;
	Filme *begin;
	f->fim++;
	begin= Filme->fim;	
	strcpy(n,f->nome->begin);

	/*if(f->fim > TAM){
		f->fim++;
		for(i=0;i<TAM;i++){
			printf("TITULO\n");
			fgets(f->nome,strucTAM,stdin);
			f->fim++;			
			getchar();
			
		}
	}
	else{
		for(i=0;i<TAM;i++){
			printf("TITULO\n");
			fgets(f->nome,strucTAM,stdin);
			f->fim++;
			getchar();
		}
	}	
	imprime(f);*/
	f->nome[f->fim++];
	/*if(f->inicio == TAM){

		f->inicio = 0;

	}*/
	
	printf("TITULO %s\n",f->nome);
		
	
		
}

void retira(Filme *f){

	int i;	
	f->inicio ++;
	f->nome[f->inicio++];
	/*if(f->inicio == TAM){
		f->inicio =0;
	}*/
	printf("TITULO retira  %s\n",f->nome);
		
	

	
}

void imprime(Filme *f){

	int i;
	for(i=0;i > TAM;i++){
		printf("TITULO %s\n",f->nome);
		
	}
}
