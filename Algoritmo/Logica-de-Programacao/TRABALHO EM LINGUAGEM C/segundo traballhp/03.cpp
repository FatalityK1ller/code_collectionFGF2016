#include <stdio.h>

int main(){
	int a,b,c,d;
	
	printf("Digite quantidade :\n");
	scanf("%d",&a);
	
	for(b=a;b>=1;b--){
		for(c=a;c>b;c--)
			printf(" ");
		for(d=1;d<=b;d++)
			printf("*");
		printf("\n");
	}
	return 0;
}
