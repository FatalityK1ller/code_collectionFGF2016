#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome,categoria;
	float salario,ajuste;
	
	printf("Digite seu nome \n");
	scanf("%s",&nome);
	
	printf("CATEGORIAS : A,B,C,D,E,F,H,I,J,L,M,N,O,P,R,Q,S,T,U,V,X,Z,K,W,Y \n");
	printf("INFORME SUA CATEGORIA\n");
	scanf("%s",&categoria);
	
	printf("Informe seu salario \n");
	scanf("%f",&salario);
	
	switch(categoria){
		case 'a':
			ajuste=salario*0.10+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 10 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'd' :
			ajuste=salario*0.15+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 15 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'e' :
			ajuste=salario*0.15+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 15 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'f' :
			ajuste=salario*0.10+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 10 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'h' :
			ajuste=salario*0.10+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 10 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'i' :
			ajuste=salario*0.15+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 15 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'j' :
			ajuste=salario*0.15+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 15 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'l' :
			ajuste=salario*0.35+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 35 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'm' :
			ajuste=salario*0.35+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 35 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'n' :
			ajuste=salario*0.35+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 35 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'o' :
			ajuste=salario*0.35+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 35 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'p' :
			ajuste=salario*0.35+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 35 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'q' :
			ajuste=salario*0.35+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 35 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'r' :
			ajuste=salario*0.25+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 25 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 's' :
			ajuste=salario*0.35+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 35 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 't' :
			ajuste=salario*0.15+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 15 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'u' :
			ajuste=salario*0.50+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 50 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'v' :
			ajuste=salario*0.50+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 50 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'x' :
			ajuste=salario*0.50+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 50 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'z' :
			ajuste=salario*0.50+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 50 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'w' :
			ajuste=salario*0.50+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 50 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'k' :
			ajuste=salario*0.25+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 25 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'y' :
			ajuste=salario*0.50+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 50 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'c' :
			ajuste=salario*0.10+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 10 PORCENTOS SOBRE O SALARIO \n");
			break;
		case 'b' :
			ajuste=salario*0.15+salario;
			printf("SALARIO REAJUSTADO FICA EM %7.2f\n",ajuste);
			printf("AJUSTE DE 15 PORCENTOS SOBRE O SALARIO \n");
			break;	
		default :
			printf("CATEGORIA INVALIDA \n");
			break;	
		
		
		 
	}
	
	return 0;
}
