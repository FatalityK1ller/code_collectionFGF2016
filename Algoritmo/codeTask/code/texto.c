#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define MIN 2 

int main(){

	char str[MAX];
	int i,j;
	char aux;
	int count=0;
	
	for(i=0;i <MIN;i++){
		printf("Escreva um texto \n");
		fgets(str,MAX,stdin);
		fflush(stdin);
	}

	for(i=0;i<MIN;i++){
		for(j=0;j<MIN;j++){
			if(strcmp(str,str) > 0){
				if(str[i] == str[j]){
					count++;
				}
			}

		}
	}

	printf("%d\n",count);

return 0;
}