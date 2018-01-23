#include <stdio.h>

int main(){

	int a = 8;
	

	printf("sizeof int : %d \n",sizeof(a));
	printf("sizeof int : %d \n",sizeof(int));
	printf("sizeof short int :%d \n",(int) sizeof(short));
	printf("sizeof unsigned int :%d \n",(int) sizeof(unsigned));
	printf("sizeof long long int :%d\n",(int) sizeof(long long));
	printf("sizeof lon int :%d \n",(int) sizeof(long));

	printf("======================================================\n");
	printf("sizeof float : %d \n",sizeof(float)); 
	printf("sizeof double :%d \n",sizeof(double));
	printf("sizeof long double :%d \n",sizeof(long double));



	return 0;

}


