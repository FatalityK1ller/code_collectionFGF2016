#include <stdio.h>
#include <ctype.h>
#include <string.h>


char str[5][20];
 
void main(void){

	

	register int i,j,t;


	for(t=0;t<5;t++){
		printf("%d ",t);
		fgets(str[t],20,stdin);
		
	}	

	for(i=0;i<t;i++){
		for(j=0;str[i][j];j++){
			if(str[i][j] == 'B' || str[i][j] == 'b'){
				putchar(str[i][j]);
				putchar('\n');
				break;
			}
			
		}
	}
			
	



}



