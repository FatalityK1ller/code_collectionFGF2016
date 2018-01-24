#include <stdio.h

int main(){

	int mat[2][2];
	int i,j,maior;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite valor linha %d e coluna %d da mtatriz: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if((i && j)==0){
				maior=mat[i][j];
			}
			if(mat[i][j]>maior){
				maior=mat[i][j];
			}
		}
	}

	printf("%d",maior);

	return 0;
}


