struct no{
 	int dado;
 	struct no *prox;
 
};
 
typedef struct no Lista;
 
Lista* criaLista();
 
Lista * insere(Lista *l,int x);
 
Lista * retira(Lista *l, int valor);
 
void imprime(Lista *l);

Lista * scaner(Lista *l);
