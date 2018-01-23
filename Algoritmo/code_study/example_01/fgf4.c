#include <stdio.h>

int main(){

    int a,b;

    printf("Digite o valor de 'a' \n");
    scanf("%d",&a);

    printf("Digite o valor de 'b'b \n");
    scanf("%d",&b);

    if(a%b == 0){
        printf("São multiplos \n");
    }
    else{
        printf("Não são mltiplos \n");
    }

    return 0;

}
