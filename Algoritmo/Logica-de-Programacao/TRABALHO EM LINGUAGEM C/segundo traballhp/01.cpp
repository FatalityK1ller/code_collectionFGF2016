#include <stdio.h>

int main(){
	int i,b,c;
	printf("Digite quantidade :\n");
	scanf("%d",&i);
	
	for(b=1;b<=i;b++){
		for(c=1;c<=b;c++)
			printf("*");
		printf("\n");
	}
	return 0;
}
