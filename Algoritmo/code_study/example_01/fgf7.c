#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 100

int main(){

	int num=32;
	char snum[LEN];

	/*printf("Enter a number: ");// output da função atoi() enter a number : 12 na string snum
	fgets(snum,LEN,stdin);
	num = atoi(snum); // função atoi() recebe o dado da variavel tipo string para a variavel tipo inteiro 

	snprintf(snum,LEN,"%d",num); //converte uma string em um inteiro a função atoi()

	printf("O valor inteiro eh %d \n",num);*/

	/*itoa(num,snum,10); //warning: implicit declaration of function ‘itoa’ [-Wimplicit-function-declaration] itoa is not portable!
  	printf("%s\n",snum);*/

	sprintf(snum,"%d",num);
	puts(snum);

	return 0;

}


