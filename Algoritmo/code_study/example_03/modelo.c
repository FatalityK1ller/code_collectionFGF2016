#include <stdio.h>
#include <string.h>

struct jogos{
char nome[30];
char tipo[15];
int ano;
int downloads;
float reating;
};

typedef struct jogos Jogos;

int main(){
Jogos g[10];
int i, j, escolha;
int aux, aux2, aux3;
char aux1[30], busca[15];

for(i=0;i<10;i++){
printf("digite o nome do jogo\n ");
fgets(g[i].nome,30,stdin);
printf("digite o estilo de jogo\n");
fgets(g[i].tipo,15,stdin);
printf("digite o ano de lancamento\n");
scanf("%d", &g[i].ano);
printf("digite o numero de downloads\n", j+1);
scanf("%d", &g[i].downloads);
printf("digite a nota do jogo\n");
scanf("%f", &g[i].reating);
getchar();
}
opcoes:
    //opcoes
    printf("o que deseja\n");
    printf("1-ver todos os jogos\n");
    printf("2-ver os jogos por ordem de avaliacao");
    printf("3-ver os jogos por estilo");
    printf("5-sair\n");
    scanf("%d", &escolha);
    getchar();
   
    if(escolha==i){
    for (i=0;i<10;i++){
        printf("%d jogo\n", i+1);
        printf("nome:%s\n", g[i].nome);
        printf("estilo:%s\n", g[i].tipo);
        printf("ano:%d\n", g[i].ano);
        printf("downloads:%d", g[i].downloads);
        printf("rating:%f\n", g[i].reating);
    }
    goto opcoes;
}
if(escolha==j){
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(g[i].reating<g[i].reating){
                aux=g[i].ano;
                g[i].ano=g[j].ano;
                g[j].ano=aux;
               
                aux2=g[i].downloads;
                g[i].downloads=g[j].downloads;
                g[j].downloads=aux2;
               
                aux3=g[i].reating;
                g[i].reating=g[j].reating;
                g[j].reating=aux3;
               
                strcpy(aux1,g[i].tipo);
                strcpy(g[i].tipo,g[j].tipo);
                strcpy(g[j].tipo,aux1);
               
                strcpy(aux1,g[i].nome);
                strcpy(g[i].nome,g[j].nome);
                strcpy(g[j].nome,aux1);
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d jogo\n", i+1);
        printf("nome:%s\n", g[i].nome);
        printf("estilo:%s\n", g[i].tipo);
        printf("ano:%d\n", g[i].ano);
        printf("downloads:%d", g[i].downloads);
        printf("rating:%f\n", g[i].reating);
        printf("\n");
    }
    goto opcoes;
}
if(escolha==i){
    printf("digite o estilo de jogo que deseja\n");
    fgets(busca,15,stdin);
    for(i=0;i<10;i++){
        if(strcmp(g[i].tipo,busca)==0){
        printf("%d jogo\n", i+1);
        printf("nome:%s\n", g[i].nome);
        printf("estilo:%s\n", g[i].tipo);
        printf("ano:%d\n", g[i].ano);
        printf("downloads:%d\n", g[i].downloads);
        printf("rating:%f\n", g[i].reating);
        printf("\n");
        }
        if(escolha==j){
            for(i=0;i<10;i++){
                for(j=0;j<10;j++){
                    if(g[i].ano<g[j].ano){
                aux=g[i].ano;
                g[i].ano=g[j].ano;
                g[j].ano=aux;
               
                aux2=g[i].downloads;
                g[i].downloads=g[j].downloads;
                g[j].downloads=aux2;
               
                aux3=g[i].reating;
                g[i].reating=g[j].reating;
                g[j].reating=aux3;
               
                strcpy(aux1,g[i].tipo);
                strcpy(g[i].tipo,g[j].tipo);
                strcpy(g[j].tipo,aux1);
               
                strcpy(aux1,g[i].nome);
                strcpy(g[i].nome,g[j].nome);
                strcpy(g[j].nome,aux1);
                    }
                }
            }
            for(i=0;i<10;i++){
                    printf("%d jogo\n", i+1);
        printf("nome:%s\n", g[i].nome);
        printf("estilo:%s\n", g[i].tipo);
        printf("ano:%d\n", g[i].ano);
        printf("downloads:%d\n", g[i].downloads);
        printf("rating:%f\n", g[i].reating);
        printf("\n");
            }
            goto opcoes;
        }
        if(escolha==i)
        printf("operaçao concluida");
       
        return 0;
     }
}
}
	
Clique aqui para Responder ou Encaminhar
10,99 GB (64%) de 17 GB usados
Gerenciar
Termos de Serviço - Privacidade
Última atividade da conta: Há 2 minutos
Detalhes
	
	

