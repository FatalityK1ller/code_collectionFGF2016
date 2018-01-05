#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

	int mat[3][3];
	int mat2[3][3];
	int mat3[3][3];
	int a,b,c,d;
	int n,m,m2;

	

	srand(time(NULL));
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			n= (rand() % 100);
			mat[a][b]=n;
			printf("Os elementos da linha %d e coluna %d da matriz1 %d\n",a,b,mat[a][b]);
		}
	}

	printf("\n");

	srand(time(NULL));
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			n= (rand() % 100);
			mat2[a][b]=n;
			printf("Os elementos da linha %d e coluna %d da matriz2 %d\n",a,b,mat2[a][b]);
		}
	}

	printf("\n");

	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			if(a==b){
				m=mat[a][b];
			}
			if(a==b){
				m2=mat2[a][b];
			}
		}
	}

	for(a=2;a<=0;a--){
		for(b=2;b<=0;b--){
			if(a==b){
				c=mat[a][b];
			}
			if(a==b){
				d=mat2[a][b];
			}
		}
	}


	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			if(a==b){
				mat3[a][b]=m*m2;
			}
			if(a!=b){
				mat3[a][b]=c*d;
			}
		}
	}

	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("Os elementos da linha %d e coluna %d da matriz3 eh : %d\n",a,b,mat3[a][b]);
		}
	}

	return 0;

}
			
	


