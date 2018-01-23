#include <stdio.h>

int main(){

	float mat[3][3];
	float mat2[3][2];
	float mat3[3][2];
	int a,b;

	mat[0][0]=1.50;
	mat[0][1]=0.50;
	mat[0][2]=0.80;
	mat[1][0]=1.00;
	mat[1][1]=0.70;
	mat[1][2]=0.80;
	mat[2][0]=2.00;
	mat[2][1]=1.00;
	mat[2][2]=1.50;

	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("O elementos da linha %d e coluna %d da matriz1 sao : %7.2f\n",a,b,mat[a][b]);
		}
	}

	printf("\n");

	mat2[0][0]=2;
	mat2[0][1]=6;
	mat2[1][0]=5;
	mat2[1][1]=2;
	mat2[2][0]=3;	
	mat2[2][1]=4;

	for(a=0;a<3;a++){
		for(b=0;b<2;b++){
			printf("O elementos da linha %d e coluna %d da matriz2 sao :%7.0f\n",a,b,mat2[a][b]);
		}
	}

	printf("\n");

	for(a=0;a<3;a++){
		for(b=0;b<2;b++){
			mat3[a][b]=mat[a][b]*mat2[a][b];
			printf("O elementos da linha %d e coluna %d da matriz3 sao :%7.2f\n",a,b,mat3[a][b]);
		}
	}

	return 0;

}
