/*Implemente um programa em C que leia duas strings s1 e s2. 
O programa deve informar quantas ocorrências de s2 há em s1 e qual a posição inicial de cada ocorrência. 
Caso não exista nenhuma ocorrência, o programa deve informar -1.*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[100],str2[50];
	int count,i,j,qtd=0;
	
	
	printf("Digite uma frase:\n");
	fgets(str1,100,stdin);
	fflush(stdin);
	
	printf("Digite uma sequência de letras:\n");
	fgets(str2,50,stdin);
	fflush(stdin);
	
	
	
	i=0;
	while(str1[i]!='\0'){
		if(str1[i]==str2[0]){
			count=0;
			for(j=1;j<strlen(str2);j++){
				if(str1[i+j]==str2[j]){
					count++;
				}		
			}
			if(count==strlen(str2)-1){
				qtd++;
				printf("Posição da palavra no string: %d\n\n",i);
				i+=strlen(str2);
			}
		}
		i++;
	}
	if(qtd==0)
		printf("-1\n");
			else
				printf("Quantidade de vezes que a palavra se repete na frase: %d\n",qtd);
	
	return 0;
}

