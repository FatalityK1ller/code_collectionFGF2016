#include <stdio.h>
#define TAM 3
#define TAMstruct 100

typedef struct pessoa{
    char nome[TAMstruct];
    int idade;
}Pessoa;

Pessoa * preenche(Pessoa *p){
   
    int i;

    for(i=0; i<TAM; i++){
        
        printf("Digite o nome da pessoa %d\n",i+1);
        fgets(p->nome,TAMstruct,stdin);
        printf("Digite idade da pessoa %d\n",i+1);
        scanf("%d",&p->idade);
        getchar();
        p++;
    }
}

Pessoa * ordena(Pessoa *p){
   
    int i,j;
    Pessoa aux;
   
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM-1; j++){
            if(p->idade > (p+1)->idade){
                aux = *p;
                *p = *(p+1);
                *(p+1) = aux;
                p++;
            }
        }
    }
    return p;
}

Pessoa *imprime(Pessoa *p){

    int i;
   
    for(i=0; i<TAM; i++){
        printf("%s - %d\n",p->nome, p->idade);
        p++;
    }

    return p;
}


int main(){
    Pessoa a[TAM];
    Pessoa *x=a;
   
    preenche(x);
   
   
    ordena(x);

    imprime(x);
}
	

