#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    srand(time(NULL));
    n=(rand() % 10);
    a1,a2,a3 = n;
    printf("os valores do indice A: %d %d %d\n",a1,a2,a3);
    

    maior = a1,a2,a3;
    printf("O maior indice A eh : %d \n", maior);


    // Obtendo o maior �ndice B
    srand(time(NULL));
    n=(rand() % 10);
    b1,b2,b3 = n;
    printf("os valores do indice B: %d %d %d\n",b1,b2,b3);
    

    maior = b1,b2,b3;
    printf("O maior indice B eh : %d \n", maior);

    // Obtendo o maior �ndice C
    srand(time(NULL));
    n=(rand() % 10);
    c1,c2,c3 = n;
    printf("os valores do indice C: %d %d %d\n",c1,c2,c3);
    

    maior = c1,c2,c3;
    printf("O maior indice C eh : %d \n", maior);

    

    return 0;
}
