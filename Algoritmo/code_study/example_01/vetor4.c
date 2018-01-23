#include <stdio.h>

int main(){

	int vet_a[5];
	int i,x=0;
	float vet_m[5];

	printf("insira o valor de x \n");
	scanf("%d\n",&x);

	for(i=0;i<5;i++){
		printf("Insira um valor para o vetor \n");
		scanf("%d\n",&vet_a[i]);
		x=x*vet_a[i];
		printf("vetor de m %7.2f\n",vet_m[x]);
		
		
	}

	return 0;
}

