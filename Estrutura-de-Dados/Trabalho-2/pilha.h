/*#define TAM 10
* inicialmente o cleilson havia feito o "#define com 10".
* Jefferson modificou para cinco.
*
*
*/
#define TAM 5

struct pilha{
	int pilha[TAM];
	int topo;
};

typedef struct pilha Pilha;
// jefferson
//void Op_inserir(Pilha *p);

void inicializa(Pilha *p);

void insere(Pilha *p, int elem);

Pilha *inserir_todos(Pilha *p);

void Op_inserir(Pilha *p);

void retira(Pilha *p);

void imprimetopo(Pilha *p);
