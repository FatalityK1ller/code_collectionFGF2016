typedef struct cabelo{
  char cor[10], tipo[20], natural[3];
  int tamanho;
}Cabelo;

void cria_cabelo (Cabelo *c, char cor[10], char tipo[20], char natural[3], int tamanho);
void ver_cabelo (Cabelo *c);
void edita_cabelo (Cabelo *c, char cor[10], int tamanho);
