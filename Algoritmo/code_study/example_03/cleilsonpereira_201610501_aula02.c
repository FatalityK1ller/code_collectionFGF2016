#include <stdio.h>

int main(){

	int a,b,c,d,e,i;
	int x[6];

	printf("Digite um numero inteiro de 5 digitos\t");
	scanf("%i%i%i%i%i",&a,&b,&c,&d,&e);

	x[0]=a;
	x[1]=b;
	x[2]=c;
	x[3]=d;
	x[4]=e;

	x[4]=(4*x[0] + 3*x[1] + 2*x[2] + x[3])%10;

	for(i=0;i<1;i++){
		
		if(x[4] == e){
			printf("CODIGO ACEITO\n");
		}
		else{
			printf("CODIGO INFORMADO ERRADO\n");
		}
	}

	for(i=0;i<5;i++){
		printf("%d",x[i]);
	}
	
		
	return 0;

}



	
