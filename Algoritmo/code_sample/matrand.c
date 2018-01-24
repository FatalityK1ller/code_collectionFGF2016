#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	int mat[2][2];
	int a,b;
	int n;

	

	srand(time(NULL));
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			n= (rand() % 100);
			mat[a][b]=n;
			printf("%d\n",mat[a][b]);
		}
	}

	return 0;

}


			
	
