#include <stdio.h>

int main(){
	
	int n,a,b,c,d=1;
	
	printf("Digite quatidade\n");
	scanf("%d",&a);
	
	for(b=1;b<=a;b++){
		for(c=1;c<=b;b++){
			printf("%d",d);
			d++;
		}
		printf("\n");
		
		return 0;
			
	}
}
