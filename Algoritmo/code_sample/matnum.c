#include <stdio.h>

int main(){

	int mat[2][2];
	int i,j;
	
	mat[0][0]=1;
	mat[0][1]=0;
	mat[1][0]=1;
	mat[1][1]=0;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Os elementos da linha %d e coluna %d da matriz eh %d\n : ",i,j,mat[i][j]);
		}
	}

	return 0;
}


