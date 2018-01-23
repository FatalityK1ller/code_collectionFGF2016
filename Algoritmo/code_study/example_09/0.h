#define TAMANHO 5

typedef struct filme{
	char fila[TAMANHO][20];
	int opcao;
	char valor[20];
	int fim;
	int inicio;
	int vazia;
}Filme;

void menu(Filme *f);
void adicionar(Filme *f,char *dado);
char *retirar();
void imprimir(Filme *f);
