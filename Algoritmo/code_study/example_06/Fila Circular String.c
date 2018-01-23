#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

char fila[TAMANHO][20];
int opcao;
char valor[20];
int fim;
int inicio;
int vazia = 1;

void menu();
void adicionar(char *dado);
char *retirar();
void imprimir();

int main()
{
    opcao = 0;
    inicio = 0;
    fim = 0;
    while(opcao != 4)
    {
        menu();
        switch(opcao)
        {
        case 1:
            printf("Digite a string: ");
            scanf("%s",valor);
            adicionar(valor);
            break;
        case 2:
            strcpy(valor, retirar());
            printf("Retirada a string %s da fila\n", valor);
            break;
        case 3:
            imprimir();
        case 4:
            break;
        default:
            printf("Opcao invalida!\n");
        }
    }
}

void menu()
{
    printf("1 - adicionar\n");
    printf("2 - retirar\n");
    printf("3 - imprimir\n");
    printf("4 - sair\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
}

void adicionar(char *dado)
{
    if(vazia==1)
    {
        strcpy(fila[fim], dado);
        fim++;
        vazia = 0;
    }
    else
    {
        if(inicio == fim)
        {
            printf("Fila cheia!\n");
        }
        else
        {
            strcpy(fila[fim], dado);
            fim++;
            if(fim == TAMANHO)
                fim = 0;
        }
    }
}

char *retirar()
{
    char *valorParaRetornar = "";

    if(vazia == 1)
    {
        printf("Fila vazia!\n");
    }
    else
    {
        valorParaRetornar = fila[inicio];
        inicio++;
        if(inicio == TAMANHO)
            inicio = 0;
        if(inicio == fim)
            vazia = 1;
    }

    return valorParaRetornar;
}

void imprimir()
{
    int i;
    int a = 0;
    i = inicio;
    if(vazia == 0)
    {
        while(a==0)
        {
            printf("%s - ",fila[i]);
            i++;
            if(i==TAMANHO)
                i=0;
            if(i==fim)
                a=1;
        }
        printf("\n");
    }
}
