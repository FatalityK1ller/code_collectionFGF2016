#include <stdio.h>

int main(){

	int mat[2][2];
	int a,b,p,maior;

	p=p+1;

	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("Digite linha %d coluna %d matriz : ",a,b);
			scanf("%d",&mat[a][b]);
			
		}
	}

	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			if((a && b)==0){
				maior=mat[a][b];
				p=mat[a][b];
			}
			if(mat[a][b]>maior){
				maior=mat[a][b];
				p=maior;
			}
			
		}
	}

	printf("%d%d",maior,p);
	return 0;
}

			
			
