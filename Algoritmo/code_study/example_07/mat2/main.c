#include <stdio.h>

int main(){

	int a,b,num,mat[2][2];
	int mat2[2][2];

	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("Os elementos da linha %d e psicao %d sao : ",a,b);
			scanf("%d",&num);
			mat[a][b]=num;
		}
	}
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("%2d\n",mat[a][b]);
		}
	}
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            mat2[a][b]=mat[b][a];

        }

	}
	for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            printf("%d\t",mat2[a][b]);
         }
    }
	return 0;
}

