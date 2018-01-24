#include <stdio.h>

int main(){

	int mat[2][2];
	int a,b,num,count=1;
	
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("Digite elementos linha %d e coluna %d matriz : ",a,b);
			scanf("%d",&mat[a][b]);
			count++;
		}
	}

	printf("Digite um valor \n");
	scanf("%d",&num);

	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			if(mat[a][b]==num){
				count++;
			}
		}
	}

	printf("A posicao do valor na matriz da linha %d e coluna %d %d eh valor: ",a,b,count);


	return 0;
}


