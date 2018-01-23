#include <stdio.h>

int main(){
	int a,b,c,d,e;
	
	printf("digite quantidade :\n");
	scanf("%d",&a);
	e=a-1;
	
	for(b=1;b<=a;b++){
		for(c=1;c<=e;c++){
			printf(" ");
		}
		e--;
		for(d=1;d<=b;d++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
