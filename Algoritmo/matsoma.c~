#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	int mat[3][3];
	int a,b;
	int n,maior,soma;

	

	srand(time(NULL));
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			n= (rand() % 100);
			mat[a][b]=n;
			printf("Os elementos da linha %d e coluna %d da matriz %d\n",a,b,mat[a][b]);
		}
	}

	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			if((a==b) && (a&&b)==0){
				maior=mat[a][b];
			}
			if(mat[a][b]>maior){
				maior=mat[a][b];
			}
			if(a==b){
				soma=mat[a][b];
				soma=soma+mat[a][b];	
			}
							
		}
	}

	printf("Valor da diagonal maior eh %d\n",maior);
	printf("\n");
	printf("Soma %d",soma);

	return 0;

}


			
	
