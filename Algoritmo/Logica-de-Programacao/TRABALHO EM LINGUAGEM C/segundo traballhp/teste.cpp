#include <stdio.h>

int main(){
	
	char a,b;
	float c;
	
	printf("nome \n");
	getchar();
	scanf("%c",&a);
	
	printf("sexo - [M] ou [F] \n");
	getchar();
	scanf(" %c",&b);
	
	printf("altura \n");
	scanf("%f",&c);
	
	return 0;
}
