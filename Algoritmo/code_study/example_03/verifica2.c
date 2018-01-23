#include <stdio.h>
#include <math.h>

int main(){

	int i = 0;
	register int c=0;
	int num;
	int temp=0;
	int novonum = 0;

	/*for(i=0;i<6;i++){
		printf("Digite um numero de 5 digitos \n");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<6;i++){	
		printf("%d",a[i]);
	}*/

	printf("digite um numero de 5 digitos\n");
	scanf("%i",&num);

	temp=num;
	while(temp > 0){
		temp = temp/10;
		c++;
	}

	printf("%i \n",c);

	while(num > 0){
		i = num % 10;
		num = num / 10;

		novonum = novonum + i*pow(10,c-1);
		c--;

	}

	printf("%i",novonum);

	for(int j=0; num > 0;j ++){
		printf("%d",i);
	}

	
	return 0;

}



	
