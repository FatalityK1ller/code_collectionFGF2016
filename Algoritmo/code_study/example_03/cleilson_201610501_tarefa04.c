#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define LIN 3
#define COL 2

int main(){

	int p1,p2; 
	int poke[LIN][COL];
	int i,j,n,sub;
	int d[LIN],vet1[LIN], vet2[COL];
	int sub_lin=0,sub_col=0;
	int maior=0;

	printf("Informe a distancia do player \n");
	scanf("%d%d",&p1,&p2);
	sub = p1 - p2;

	srand(time(NULL));

	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			n=rand() % 10;
			poke[i][j]=n;
			//d= (sqrt(pow(p1-p2)) + (pow(poke[i]-poke[j])));
			
			if(i == 0){
				vet2[j] = poke[i][j];
				sub_lin = sub_lin - poke[i][j];
				
			}
				
		}
'			
			
			
	}

	for(i=0;i<LIN;i++){
		d[i] = sqrt(pow(sub,2) + pow(sub_lin,2));
			if(i == 0){
				maior = d[i];
			}
			if(maior < d[i]){
				maior = d[i];
			}
	}

	for(i=0;i<LIN;i++){
		for(j=0;j<COL;j++){
			printf("%d\n",poke[i][j]);
		}
	}	

	printf("O mais proximo eh %d\n : ",maior);

	
	 
	return 0;

}
			
		
		
		
		
		
	


