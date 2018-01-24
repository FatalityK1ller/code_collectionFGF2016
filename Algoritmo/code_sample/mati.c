#include <stdio.h>

int main(){

	int mat[2][2];
	int a,b,maior;

	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("Digite valor linha %d e coluna %d matriz : ",a,b);
			scanf("%d",&mat[a][b]);
		}
	}
	
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			if((a && b)==0){
				maior=mat[a][b];
			}
			if(mat[a][b]>10){
				maior=mat[a][b];
			}
		}
	}
	
	printf("Valor liha %d e coluna %d do maior %d : ",a,b,maior);

	return 0;
}
