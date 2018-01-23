#include <stdio.h>

int main(){

	int a[6],i;
	int maior=0;
	int menor=0;
	int reverse=0;
	

	for(i=0;i<6;i++){
		printf("Digite um numero \n");
		scanf("%d",&a[i]);
			
		if(a[i] == 0){
			maior = a[i];
			menor = a[i];
		}
		if(maior < a[i]){
			maior =a[i];
		}
		if(menor > a[i]){
			menor = a[i];
		}
				
				
		
	}

	for(i=0;i<6;i++){
		printf("%d ",a[i]);

		
	}	
	
	printf("MAIOR EH : %d\n ",maior);
	printf("MENOR EH : %d\n",menor);
	
	
	

	return 0;

			
		
}
	
	
