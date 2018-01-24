#include <stdio.h>

int main(){

	int mat[2][2];
	int a,b;
	
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("Digite elementos linha %d e coluna %d matriz : ",a,b);
			scanf("%d",&mat[a][b]);
		}
	}

	for(a=1;a>=1;a--){
		for(b=1;b>=0;b--){
			printf("Ordem inversa %d\n",mat[a][b]);
		}
	}

	return 0;
}


