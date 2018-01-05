#include <stdio.h>

int main(){

	int a,b,num,mat[3][3];

	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("Os elementos da linha %d e psicao %d sao : ",a,b);
			scanf("%d",&num);
			mat[a][b]=num;
		}
	}
	for(a=3;a<=0;a--){
		for(b=3;b<=0;b--){
			printf("os elementos da linha e coluna da matriz sao : %d\n",mat[a][b]);
		}
	}

	return 0;
}


