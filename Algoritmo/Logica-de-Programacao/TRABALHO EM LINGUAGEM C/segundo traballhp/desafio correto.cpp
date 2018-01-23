#include <stdio.h>

int main(){
	
	int a,b,c,d,e;
	
	printf("digite a quantidade\n");
	scanf("%d",&a);
	
	for(b=1;b<=a;b++){
		for(c=a;c>b;c--)
			printf(" ");
		for(d=1;d<=b;d++)
			printf("*");
		for(e=1;e<d;e++)
			printf("*");
		printf("\n");
	}
	for(b=a;b>1;b--){
		for(c=a;c<=b;c--)
			printf(" ");
		for(d=1;d<=b;d++)
			printf("*");
		for(e=1;e<d;e++)
			printf("*");
		printf("\n");
	}
		
	return 0;
}
