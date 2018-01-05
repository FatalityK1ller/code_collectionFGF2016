typedef struct Geladeira{
	float peso, preco, altura;
	char cor[10], material[15];
}geladeira;

void criageladeira(geladeira *q,char Cor[10],char Material[15], float Peso, float Preco, float Altura);
void trocacor(geladeira *q,char Cor[10]);
void alterapreco(geladeira *q,float x);
void vergeladeira(geladeira *q);
