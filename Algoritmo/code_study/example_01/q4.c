#include <stdio.h>
#include <stdlib.h>

int main(){

	int vet[5];
	int i;

	for(i=0;i<4;i++){
		print("%d", rand() % 100);
		scanf("%d",&vet[i]);
	}
	return 0;
}
