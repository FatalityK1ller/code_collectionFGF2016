#include <stdio.h>

void main(void){

	int i,j,num[3][4];

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			num[i][j]=(i*4)+j+1;
		}
	}

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%3d",num[i][j]);
			printf("\n");
		}
	}

}
