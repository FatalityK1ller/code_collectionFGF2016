/*********************************************** [J] ******************************************/
#define TAM 15
typedef struct {
	int numero;
	float valor;
	char tipo_sexo[TAM];
	char cor[TAM];
	char marca[TAM];

}SAPATO;

SAPATO *sexo_m_f(SAPATO *s);

SAPATO *cor(SAPATO *s);

void R_Dados(SAPATO *p);

void M_DADOS(SAPATO *p);

SAPATO *TROCA_SAPATOS(SAPATO *q);
