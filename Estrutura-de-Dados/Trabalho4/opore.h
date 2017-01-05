#define tm 20
typedef struct {
char pilha[tm];
char equa[tm];
int topo;
}Opera;

void Inicializa(Opera *p);

Opera *Scanner(Opera *p);

void Mostrar(Opera *p);
