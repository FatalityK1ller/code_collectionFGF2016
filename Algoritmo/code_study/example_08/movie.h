#define TAM 2
#define strucTAM 30

typedef struct filmes{
    char name[structTAM];
    float rating;
    char style[structTAM];
    char actor[structTAM];
    int year;
}movie;

void dados(movie *c);
void menu(movie *c);
void listarFilme(movie *c);
void ordenar(movie *c);
void ordenarSrt(movie *c);
void data(movie *c);


