#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,i,j;

	printf("Determine o tamanho da matriz \n");
	scanf("%d",&n);

	int mat[n][n];
	int mat2[n][n];

	printf("\n");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Informe valor da linha %d e coluna %d da matriz : ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}

	printf("\n");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			mat2[i][j]=mat[j][i];
			
		}
	}

	printf("\n");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",mat2[i][j]);
		}
	}


	system("pause");
	return 0;

}


