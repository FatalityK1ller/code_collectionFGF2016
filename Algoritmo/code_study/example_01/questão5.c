#include <stdio.h>

int main (){

    int n;

    do{

	    printf ("Digite um numero inteiro \n");
	    scanf ("%d",&n);

	   
	    if (n%2==0 && n%3==0){
		printf(" 1 - multiplos por 2 e 3 \n ");
	    }
	    else if(n%5==0 && n%7==0){
		printf(" 2 - multiplos por 5 e 7 \n ");
	    }
	    else if(n%2==0 && n%3==0 && n%5==0 && n%7==0){
		printf(" 0 - multiplos por 2,3,5 3 7 \n ");
	    }
            else if (n<0){
		printf("PROGRAMA ENCERRADO \n");
        
	    }
       }while(n>=0);
	
	return 0;      

      

}
