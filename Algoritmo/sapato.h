typedef struct Sapato{
	int numero, estado;
	char marca[30],cor[20], material[30];
	float peso,valor;
}sapato;

void criaSapato1(sapato *p, int num, int est, float pes, float val);
void criaSapato2(sapato *p);

void alteraNum(sapato *p, int num);
void alteraEstado(sapato *p, int est);
void alteraPeso(sapato *p, float pes);
void alteraValor(sapato *p, float val);
void verSapato1(sapato *p);
void verSapato2(sapato *p);
 

