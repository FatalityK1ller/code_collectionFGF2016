#include<stdio.h>
#define TAM 3
#define TAMstruct 100

typedef struct pessoa{
   char nome[TAMstruct];
   int idade,aux;
}Pessoa;

int i,j;

Pessoa*preenche(Pessoa *p){
   for( i=0;i<TAM;i++){
	printf("Digite o nome da pessoa %d\n",i+1);
	fgets(p->nome,TAMstruct,stdin);
	printf("Digite idade da pessoa %d\n",i+1);
	scanf("%d",&p->idade);
	getchar();
	p++;
	
   }
   return p;
}

Pessoa * ordena(Pessoa*p){

	int i,j;
	Pessoa aux;

   for(i=0;i<TAM;i++){
       for(j=0;j<TAM-1;j++){
   	  if((p+i)->idade > (p+j)->idade){
	     aux = *(p+i);
	     *(p+i) = *(p+j);
	     *(p+j) = aux;
	     p++;
	  }
	}
   }
   return p;
}


Pessoa * imprime(Pessoa *p){
   	for(i=0;i<TAM;i++){
      		printf("%s - %d\n",p->nome,p->idade);
		p++;
   	}
}

int main(){
   Pessoa a[TAM];
   Pessoa *x = a;
   preenche(x);
   printf("======Dados iniciais========\n");
   imprime(x);
   ordena(x);
   printf("======Dados ordenados=======\n");
   imprime(x);

return 0;

}
