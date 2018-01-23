#include <stdio.h>

int main(){
	int a,b,c,d;
	
	printf("digite quantidade\n");
	scanf("%d",&a);
	
	d=a;
	
	for(b=1;b<=a;b++){
		for(c=1;c<=a;c++)
			printf(" ");
		d--;
		for(c=1;c<=2*d-1;c++)
			printf("*");
		printf("\n");			
	}
	return 0;
}
