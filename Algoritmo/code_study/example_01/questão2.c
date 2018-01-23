#include <stdio.h>
#include <math.h>


int main(){

	int a,b,c;
	float x,x1,delta;

	printf("Digite valor de A \n");
	scanf("%d\n",&a);

	printf("Digite valor de B \n");
	scanf("%d\n",&b);

	printf("Digite valor de C \n");
	scanf("%d\n",&c);

	delta=b*b-4*a*c;

	if(delta<0){
		printf("NAO EXISTE RAIZ \n");
	}
	if(delta>=0){
		x= (-b+sqrt(delta))-(4*a*c)/(2*a);
		x1= (-b-sqrt(delta))-(4*a*c)/(2*a);
		printf("Valor de x  %7.2f\n ",x,x1);
				
	}
	else{
		printf("A EQUAÇÃO NAO E DO SEGUNDO GRAU: \n");
		
	}
	
	return 0;

	}
