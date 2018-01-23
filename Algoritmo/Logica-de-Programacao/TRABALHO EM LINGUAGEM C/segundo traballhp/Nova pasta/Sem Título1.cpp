#include <stdio.h>

int main(){
	
	float a,b,n,sal,c=1,maior=0,menor=0,soma=n;
	char nome;
	int count=0;
	
	printf("Digite a quantidade de funcionarios\n");
	scanf("%f",&n);
	
	for(a=1;a<=n;a++){
		printf("Informe o salario%7.0f\n");
		scanf("%f",&b);
		soma=soma+c;
		c=c+1;
				
		if(b>maior){
			maior=b;
			count=0;
		}
		if(b<menor){
			menor=b;
			count=0;
		}
		sal=sal+count;
		
	}
	
	printf("Soma dos salarios %7.1f\n",soma);
	printf("Maior salario %7.2f\n",maior);
	printf("Menor salario %7.2f\n",menor);
	
	return 0;
}
