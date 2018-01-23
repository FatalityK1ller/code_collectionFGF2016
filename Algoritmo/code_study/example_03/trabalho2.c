#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char str[20];
	int i;
	int len;
	int count=0;
	
	printf("Digite um nome com espaços \n");
	fgets(str,20,stdin);

	
	len = strlen(str);

	for(i=0;i<len;i++){
		if(str == "\0"){
			count++;
		}
	}
	
	printf("%d",count);	

			
	return 0;

}

