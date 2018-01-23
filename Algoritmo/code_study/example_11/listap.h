//Faça uma lista duplamente encadeada, uma pilha 
// Pilha -	struct no{ 
// 			int dado;
//			struct no *topo,*prox,*ant;
// As operações não retornam estrutura - operações void
struct no{
	int dado;
	struct no *topo,*prox,*ant;
};
typedef struct no Lista;

void inicio(Lista *l);

void insere(Lista *l,int x);

void retira(Lista *l);

void imprime(Lista *l);

