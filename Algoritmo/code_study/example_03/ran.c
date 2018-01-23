#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int a, int b, int c, int n){
	srand(time(NULL));
	n=(3 + rand() % 9);
	a,b,c = n;
return(n);
}
	
	

int maximo(int a, int b, int c, int maior){

	if(a > b)
		maior = a;
	else
		maior = b;
	if(c > maior)
		maior = c;

return(maior);
}

int main()
{
    int a1, a2, a3, maior;
    int b1, b2, b3;
    int c1, c2, c3;
    int n;	
    

    printf("/*********************************************************************************/ \n");
    printf("MAXINDICE - Este programa calcula o maximo de cada indice em um periodo de 3 meses: \n");
    printf("/*********************************************************************************/ \n");

    // Obtendo o maior �ndice A
    
    n = a1,a2,a3;
    printf("os valores do indice A: %d %d %d\n",a1,a2,a3);
    

    maior = a1,a2,a3;
    printf("O maior indice A eh : %d \n", maior);


    // Obtendo o maior �ndice B
    
    n = b1,b2,b3;
    printf("os valores do indice B: %d %d %d\n",b1,b2,b3);
    

    maior = b1,b2,b3;
    printf("O maior indice B eh : %d \n", maior);

    // Obtendo o maior �ndice C
   
    n = c1,c2,c3;
    printf("os valores do indice C: %d %d %d\n",c1,c2,c3);
    

    maior = c1,c2,c3;
    printf("O maior indice C eh : %d \n", maior);

    

    return 0;
}
