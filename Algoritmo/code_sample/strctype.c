#include <stdio.h>
#include <ctype.h>

int main(){
	char str[10];
	int i;

	printf("Digite uma palavra ");
	fgets(str,10,stdin);

	for(i=0;i<10;i++){
		str[i]=toupper(str[i]);
	}

	printf("%s\n",str);

	return 0;

}


