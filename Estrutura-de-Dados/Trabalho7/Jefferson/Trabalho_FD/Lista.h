//Jefferson
struct no{
	int dado;
	struct no *prox;

};

typedef struct no Lista;

Lista *Cria_Lista();

Lista *Insere(Lista *l,int x);

void Imprime(Lista *l);

void Remove(Lista *l,int x);

//Lista *busca(Lista *l,int x);



