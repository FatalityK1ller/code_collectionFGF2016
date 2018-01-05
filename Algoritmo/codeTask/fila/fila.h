#define TAMANHO 5

struct fila{
	int fila[TAMANHO];
	int inicio, fim;
};
typedef struct fila Fila;

// incio = 0
// fim = -1 
// se esta vazia = quando incio > fim 
// se está cheia = fim >= tam

void inicializa(Fila *f);
void insere(Fila *f, int elem);
void retira(Fila *f);
void imprimefila(Fila *f);



