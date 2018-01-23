#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct musica{
	char name[10];
	char style[10];
	int listen;
	int position;
}music;

int main(){
	music m[10];
	int i,num;

	for(i=0;i<2;i++){
		printf("Digite o nome da musica : ");
		fgets(m[i].name,10,stdin);
						
		printf("Quantas vezes a musica foi ouvida : ");
		scanf("%d",&m[i].listen);		
		
		printf("Digite a posicao da musica : ");
		scanf("%d",&m[i].position);

		
	}

	return 0;

}




	
