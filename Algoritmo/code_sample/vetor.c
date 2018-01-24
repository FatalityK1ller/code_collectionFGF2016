#include <stdio.h>

int main(){

	int a,b,mat[2] [2];
	int num;

	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("Digite valores para matriz :\n");
			scanf("%d",&num);
			mat[a] [b]=num;
		}
	}
	
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			if(mat[a] [b]%2==0){
				printf("%d\n",mat[a] [b]);
			}
		}
	}

	return 0;
}
