#define TAM 10

struct pilha{
	int pilha[TAM];
	int topo;
	
};

typedef struct pilha Pilha;

/*inicializa um pilha vazia*/
void inicializa(Pilha *p);
/*visualiza uma pilha vazia*/
void ver(Pilha *p);
/*insere um inteiro no topo da pilha*/
void insere(Pilha *p, int topo);
/*retira um elemento da pilha*/
void retira(Pilha *p);
/*imprime o elemento do topo da pilha*/
void imprimetopo(Pilha *p);
