#include<stdio.h>
#include"fila.h"

#define TAM 10

int main(){
FILA fila, *s = &fila;
int num;
s->begin = 0;
s->end = (-1);
begin_fila(s);
printf("%d end\n", s->end);
//Op_fila(num);
/*printf("Digite um número: ");
scanf("%d", &num);
insere_fila(s, num);
printf("%d end\n", s->end);*/
begin_fila(s);

mostrar(s);
printf("%d\n",s->vet[0]);
printf("%d\n",s->vet[1]);
return 0;
}
