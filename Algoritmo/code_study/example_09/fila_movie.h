#define TAM 3
#define strucTAM 30
typedef struct filme{
	int movie[TAM];
	int inicio,fim;
	char nome[strucTAM];
	
}Filme;

void criaFila(Filme *f);
void insere(Filme *f,char n[strucTAM]);
void retira(Filme *f);
void imprime(Filme *f);

