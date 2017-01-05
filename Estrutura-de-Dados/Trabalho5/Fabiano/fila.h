#define TAM 10

typedef struct fila{
	int fila[TAM];
	int inicio, fim;
}Fila;

void inicia_fila(Fila *f);
void insere_fila(Fila *f, int fila);
void remove_fila(Fila *f);
void imprime_fila(Fila *f);
void menu(Fila *f);
