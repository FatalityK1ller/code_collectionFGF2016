struct no{
	int dado;
	struct no *prox;

};

typedef struct no Lista;

Lista* criaLista();

Lista * insere(Lista *l,int x);

void imprime(Lista *l);

void * retira(Lista *l);

Lista * busca(Lista *l,int x);



