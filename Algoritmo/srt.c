#include <stdio.h>
#include <stdlib.h>


int main(){

	char str[3];
	int i;	
	

	printf("Digite uma palavra ");
	scanf("%s",str);

	
	for(i=0;i< 3;i++){
		str[i]=str[i]-32;
	}

	printf("A palavraem maiuscula %s\n ",str);
	
	
	return 0;

}
