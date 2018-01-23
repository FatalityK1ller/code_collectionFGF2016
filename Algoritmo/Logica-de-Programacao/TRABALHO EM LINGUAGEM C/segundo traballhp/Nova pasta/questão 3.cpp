#include <stdio.h>

int main(){
	int a,b,c,d,soma=0;
	
	printf("Digite a quantidade\n");
	scanf("%d",&a);
	printf("\n");
	
	for(b=1;b<=a;b++){
		c=b*3;
		d=b*5;
		soma=soma+c+d;
		
		printf("%d\n",c);
		printf("%d\n",d);
	}
	
	printf("A soma eh%d\n",soma);
	return 0;
}
