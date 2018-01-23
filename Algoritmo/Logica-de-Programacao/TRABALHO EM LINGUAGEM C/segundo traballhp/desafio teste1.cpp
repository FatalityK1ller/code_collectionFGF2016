#include <stdio.h>

int main(){
	
	int i,a,b;
	
	printf("Digiite a quantidade : \n");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		for(b=1;b<=i;b++)
		printf("*");
	printf("\n");
	}
	return 0;
	
}
