#define TAM 10
typedef struct {
	int vet[TAM];
	int begin, end, num;
}FILA;

void begin_fila(FILA *p);
void insere_fila(FILA *p, int elem);
void retira_fila(FILA *p);
int Op_fila(int num);
void mostrar(FILA *p);
