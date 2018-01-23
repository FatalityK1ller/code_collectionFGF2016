//Estrutura da lista que será criada
typedef struct lista {
    char *nome;
    int idade;
    struct lista *proximo;
} Dados;
  
//Funções para manusear os dados (irão retornar dados)
Dados *inicia_dados  (char *nome, int idade);
Dados *insere_dados  (Dados *dados, char *nome, int idade);
Dados *delbusca_dados(Dados *dados, char *chave);
Dados *deleta_dados  (Dados *dados, int nTipo);
int   checa_vazio    (Dados *dados);

//Funções para mostrar dados
void  exibe_dados    (Dados *dados);
void  exibe_tamanho  (Dados *nova);
void  busca_dados    (Dados *dados, char *chave);
  
//Funções do Menu
void criavazia(void);    //1
void insereinicio(void); //2
void inserefim(void);    //3
void listavazia(void);   //4
void prielemento(void);  //5
void ultelemento(void);  //6
void exibe(void);        //7
void exibetam(void);     //8
void deletapri(void);    //9
void deleta(void);       //a
void delbusca(void);     //b
void busca(void);        //c
