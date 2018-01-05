#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	int mat[2][2];
	int mat2[2][2];
	int mat3[2][2];
	int a,b;
	int n;

	

	srand(time(NULL));
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			n= (rand() % 100);
			mat[a][b]=n;
			printf("%d\n",mat[a][b]);
		}
	}

	printf("\n");

	srand(time(NULL));
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			n= (rand() % 100);
			mat2[a][b]=n;
			printf("%d\n",mat2[a][b]);
		}
	}

	printf("\n");

	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			mat3[a][b]=mat[a][b]+mat2[a][b];
			printf("%d\t",mat3[a][b]);
		}
	}

	return 0;

}


			
	
