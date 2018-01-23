#include <stdio.h>

int main(){
	
	int n,i,j,k;
	
	printf("digite quantidade\n");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		for(j=n;j>i;j--)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
