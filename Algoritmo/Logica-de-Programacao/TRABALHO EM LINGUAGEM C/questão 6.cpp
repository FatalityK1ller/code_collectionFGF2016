#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float temperatura,C,F;
	
	printf("Informe um valor de temparatura para conversão\n");
	scanf("%f",&temperatura);
	
	F=temperatura*(9.0/5.0)+32.0;
	C=5.0*(temperatura-32.0)/9.0;
	
	printf("A temperatura em graus Fahrenheit : %7.2f\n",F);
	printf("A temperatura em graus Celsius : %7.2f\n",C);
	
	system("pause");
}
