#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome1,nome2,nome3;
	float venda1,venda2,venda3;
	float comissao1,comissao2,comissao3;
	
	printf("INFORME SEU NOME \n");
	scanf("%s",&nome1);
	
	printf("VALOR DA VENDA \n");
	scanf("%f",&venda1);
	system("cls");

	
	printf("INFORME SEU NOME \n");
	scanf("%s",&nome2);
	
	printf("VALOR DA VENDA \n");
	scanf("%f",&venda2);
	system("cls");

	
	printf("INFORME SEU NOME \n");
	scanf("%s",&nome3);
	
	printf("VALOR DA VENDA \n");
	scanf("%f",&venda3);
	system("cls");

	
	if(venda1>50.000){
		comissao1=venda1*0.12;
		printf("comissao vendedor 1 eh %7.2f\n",comissao1);
		printf("vendedor numero 1 : %s\n",nome1);
		
	}
	else if(venda1>=30.000 && venda1<=50.000){
		comissao1=venda1*0.95;
		printf("comissao do vendedor 1 eh %7.2f\n",comissao1);
		printf("vendedor numero 1 : %s\n",nome1);
		
	}
	else if(venda1<30.000){
		comissao1=venda1*0.7;
		printf("comissao vendedor 1 eh %7.2f\n",comissao1);
		printf("vendedor numero 1 : %s\n",nome1);
		
	}
	
	if(venda2>50.000){
		comissao2=venda2*0.12;
		printf("comissao vendedor 2 eh %7.2f\n",comissao2);
		printf("vendedor numero 2 : %s\n",nome2);
		
	}
	else if(venda2>=30.000 && venda2<=50.000){
		comissao2=venda2*0.95;
		printf("comissao vendedor 2 eh %7.2f\n",comissao2);
		printf("vendedor numero 2 : %s\n",nome2);
		
	}
	else if(venda2<30.000){
		comissao2=venda2*0.7;
		printf("comissao vendedor 2 eh %7.2f\n",comissao2);
		printf("vendedor numero 2 : %s\n",nome2);
		

    }
    
	if(venda3>50.000){
		comissao3=venda3*0.12;
		printf("comissao vendedor 3 eh %7.2f\n",comissao3);
		printf("vendedor numero 3 : %s\n",nome3);
		
	}
	else if(venda3>=30.000 && venda3<=50.000){
		comissao3=venda3*0.95;
		printf("comissao vendedor 3 eh %7.2f\n",comissao3);
		
	}
	else if(venda3<30.000){
		comissao3=venda3*0.7;
		printf("comissao vendedor 3 eh %7.2f\n",comissao3);
		printf("vendedor numero 3 : %s\n",nome3);
	
    }
    
    printf("valor da venda %7.2f\n ",venda1);
    printf("valor da venda %7.2f\n ",venda2);
    printf("valor da venda %7.2f\n ",venda3);
    
       
   
	
	return 0;
	
}
