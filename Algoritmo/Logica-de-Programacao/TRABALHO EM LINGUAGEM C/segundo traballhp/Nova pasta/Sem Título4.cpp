#include <stdio.h>

int main(){
	float a,b,c,d,media1,media2;
	float soma=0,soma2=0;
	float somaidade=0;
	
	printf("Digite a quantidade\n");
	scanf("%f",&a);
	
	for(b=1;b<=a;b++){
		printf("Digite altura\n");
		scanf("%f",&c);
		soma=soma+c;
	
		
		printf("digite o ano\n");
		scanf("%f",&d);
		somaidade=somaidade+d;
		
		if(c==1.70 && d>=20){
			soma2=soma+c;
		}
		
	}
		media1=soma/a;
		media2=somaidade/a;
	
	printf("media altura%7.2f\n",media1);
	printf("media anos%7.2f\n",media2);
	printf("media altura %7.2\n",soma2);
	
	return 0;
}
