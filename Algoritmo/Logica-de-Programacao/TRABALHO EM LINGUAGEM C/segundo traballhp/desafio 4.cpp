#include <stdio.h>

int main(){
	
	int a,i,b;
	
	printf("Digiite a quantidade : \n");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		for(b=1;b<=i;b++)
		printf("*");
	printf("\n");
	}
	return 0;
	
}
