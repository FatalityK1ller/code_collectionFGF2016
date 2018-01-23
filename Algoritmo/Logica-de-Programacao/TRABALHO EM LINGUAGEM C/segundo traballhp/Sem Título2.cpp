#include <stdio.h>

int main(){
	
	char a,b;
	float c,peso;
	
	printf("nome\n");
	fflush(stdin); 
	scanf("%c",&a);
	
	printf("sexo\n");
	fflush(stdin); 
	scanf("%c",&b);
	
	printf("altura\n");
	fflush(stdin); 
	scanf("%f",&c);
	
	if(b='m'){
		peso= (72.7 * c) - 58;
		printf("PESO IDEAL EH : %7.2f\n",peso);
		
	}
	else if(b='f'){
		peso=(62.1 * c) - 44.7;
		printf("PESO IDEAL EH : %7.2f\n",peso);
	}
	else{
		printf("SEXO INFORMADO IVALIDO %c\n");
	}
	
	return 0;
}
