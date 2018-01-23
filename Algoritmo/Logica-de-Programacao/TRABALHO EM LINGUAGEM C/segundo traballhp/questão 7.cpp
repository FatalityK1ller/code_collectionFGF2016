#include <stdio.h>

int main(){
	
	int a,b,c;
	
	printf("DIGITE O PRIMEIRO NUMERO\n");
	scanf("%d",&a);
	
	printf("DIGITE O SEGUNDO NUMERO\n");
	scanf("%d",&b);
	
	printf("DIGITE O TERCEIRO NUMERO\n");
	scanf("%d",&c);
	
	if(a<=b && b<=c ){
		printf("ORDEM E %d %d %d\n",a,b,c);
	}
	else if(a<=c && c<=b){
		printf("ordem eh %d %d %d\n",a,c,b);
	}
	else if(b<=a && a<=c){
		printf("ordem eh %d %d %d\n",b,a,c);
	}
	else if (b<=c && c<=a){
		printf("ordem %d %d %d \n",b,c,a);
	}
	else if(c<=a && a<=b){
		printf("ordem %d %d %d\n",c,a,b);
	}
	else if(c<=b && b<a){
		printf("ordem eh %d %d %d\n",c,b,a);
	}
	
	return 0;
}
