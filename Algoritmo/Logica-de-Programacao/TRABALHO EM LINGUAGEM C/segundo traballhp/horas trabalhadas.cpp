#include <stdio.h>

int main(){
	
	int horas_mes;
	float hs,hora,total;
	
	printf("horas mes \n");
	scanf("%d",&horas_mes);
	printf("hora salario\n");
	scanf("%f",&hora);
	
	hs=horas_mes/4;
	
	if(hs>40){
		total=(hora*0.50+hora)*horas_mes;
		printf("total a receber : %7.2f\n",total);
	}
	else if(hs<=40){
		total=hora*horas_mes;
		printf("total a receber : %7.2f\n",total);
	}
	
	return 0;
}
