#include <stdio.h>

int main(){
	int a,b,c;
	int count,count2;
	
	printf("Digite a quantidade\n");
	scanf("%d",&a);
	
	for(b=1;b<=a;b++){
		printf("Digite um numero\n");
		scanf("%d",&c);
		
		if(c%2==0){
			count=count+1;
			count=0;
		}
		else{
			count2=count2+1;
			count2=0;
		}
	}
	
	printf("Os numeros pares %d\n",count);
	printf("Os numeros impares %d\n",count2);
	return 0;
	
}
