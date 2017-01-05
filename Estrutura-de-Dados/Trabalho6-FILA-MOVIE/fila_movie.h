#define TAM 3
#define strucTAM 30
typedef struct filme{
	int movie[TAM];
	int inicio,fim;
}Filme;

void inicia(Filme *f);
void insere(Filme *f,int elem);
void retira(Filme *f);
void imprime(Filme *f);

