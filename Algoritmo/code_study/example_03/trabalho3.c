#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

	char word[100];
	int i,count=0;

	printf("Digite uma palavra\n");
	fgets(word,100,stdin);

	for(i=0;i<strlen(word);i++){
		if((word[i]=='a') || (word[i]=='e') || (word[i]=='i') || (word[i]=='o') || (word[i]=='u')){
			count++;
		}
	}



	printf("\nNumeros de vogais: %d\n\n",count);

	return 0;
}

	
