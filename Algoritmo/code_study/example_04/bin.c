#include <stdio.h>
#include <stdlib.h>


int main(){

	int n; 
	int b;
	int i;
	

	printf("Digite um numero ");
	scanf("%d",&n);
	
	for(i=31;i>=0;i--){
		b = n >> i;
			if(b & 1 ){
				printf("1");
			}else{
				printf("0");
			}
	}

	printf("\n");

	system("pause");
		
}

	
