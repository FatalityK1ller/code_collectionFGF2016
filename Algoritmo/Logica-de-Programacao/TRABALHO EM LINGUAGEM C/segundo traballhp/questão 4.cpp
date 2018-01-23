#include <stdio.h>

int main(){
	
	float horas_mes,hora_sal,total;
	float sal_total;
	
	printf("A JORNADA DE TRABALHO E DE 40 HORAS SEMANAIS \n");
	printf("UM MES TEM 4 SEMANAS CORRESPONDENTE A 160 HORAS \n");
	printf("Informe a quuatidade de horas trabalhadas no mês\n");
	scanf("%f",&horas_mes);
	
	printf("Informe o salario por hora \n");
	scanf("%f",&hora_sal);
	
	total=hora_sal*40;
	sal_total=total*4;
	
	
	if('horas_mes>160'){
		sal_total=(sal_total*0.50)+(hora_sal*horas_mes);
		printf("Salario a receber eh : %7.2f\n",sal_total);
	}
	else if('horas_mes<=160'){
		printf("Salario a receber eh : %7.2f\n",sal_total);
	}
	
	return 0;
	
	
}
