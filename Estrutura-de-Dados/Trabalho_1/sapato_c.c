#include<stdio.h>
#include<string.h>
#include"sapato.h"
#define TAM 15

SAPATO a;

int main(){

R_Dados(&a);
M_DADOS(&a);
TROCA_SAPATOS(&a);
M_DADOS(&a);

return 0;
}
