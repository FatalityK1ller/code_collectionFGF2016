#include <stdio.h>
#define LIN 2
#define COL 3

int main(){
	int mat[LIN][COL];
	int i,j;

	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("Insira os elementos da linha %d e coluna %d da matriz : ",i,j);
			scanf("%d",&mat[i][j]);
				if((i!=j) && mat[i][j]<0){
					mat[i][j]=0;
				}
		}
	}

	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("Os elementos da linha %d e coluna %d da matriz %d\n : ",i,j,mat[i][j]);
		}
	}
	
	
	return 0;

}




	
