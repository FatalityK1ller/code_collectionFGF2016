typedef struct aviao{
	float tamanho;
	float peso;
	char cor[50];
	char empresa[50];
	int estado;
}Aviao;

void criar(Aviao *p,float tamanho,float peso,int estado);
void ver(Aviao *p);
void cria2(Aviao *p, char peso[50],char empresa[50]);
void ver2(Aviao *p);
void alterar(Aviao *p, int estado);
void verestado(Aviao *p);

