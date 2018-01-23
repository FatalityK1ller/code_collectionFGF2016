#include <stdio.h>

int main(){

    	float parafuso = 0.50;
    	float porcas = 1.50;
    	float arruelas = 1.00;
    	char name[20];
    	float quantidade,total,totalf;
	int opcao;

    	printf("Informe seu nome \n");
    	fgets(name,20,stdin);
    	

	printf("1 - PARAFUSO = 0.50 R$ \n");
	printf("2 - PORCAS = 1.50 R$ \n");
	printf("3 - ARRUELAS = 1.00 R$ \n");
	printf("Digite de 1 a 3 para escolha da compra \n");
	scanf("%d",&opcao);	

    	switch(opcao){
        	case 1:
            		printf("Informe a quantidade \n");
            		scanf("%f",&quantidade);
            		total=quantidade*parafuso;
            		totalf=(total*0.20)-total;
	    		break;
		case 2:
			printf("informe a quantidade \n");
			scanf("%f",&quantidade);
			total=quantidade*porcas;
			totalf=(total*0.10)-total;
			break;
		case 3:
			printf("informe a quantidade \n");
			scanf("%f",&quantidade);
			total=quantidade*arruelas;
			totalf=(total*0.30)-total;
			break;
	}

	printf("%s o Total a pagar %7.2f com desconto o total fica em %7.2f\n",name,total,totalf);


	return 0;

}
			

		
    
