// arquivo teste.h
#define TAMANHO 5

/* Com as variaveis inicio e fim definidas no arquivo de cabeçalho 
  fora da struct, ficará mais claro e manipulavel o controle da fila*/

/*  Variaveis globais "inicio" e "fim", declaradas aqui, são por padrão iniciadas com 0,
  dispensando a necessidade de serem iniciadas em alguma outra parte do programa. */
extern int inicio, fim; 

typedef struct filme{
    char valor[20];
}Filme;

Filme filmes[TAMANHO];

/* Todo o vetor é referenciado por um unico ponteiro, 
desta forma, as modificacoes não vão precisar de retorno. */

void zerar(Filme *f, int idx);
void menu();
void adicionar(Filme *f);
void retirarFila(Filme *f);
void retirarPilha(Filme *f);
void imprimir(Filme *f);
