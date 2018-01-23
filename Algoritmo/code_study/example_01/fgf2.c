#include <stdio.h>

int main(){

    float nota1,nota2,nota3;
    float media,mediafinal=10;
   
    float peso1=2.0;
    float peso2=3.0;
    float peso3=5.0;
           

    printf("Digite as notas 1,2 e 3 \n");
    scanf("%f%f%f",&nota1,&nota2,&nota3);

    media=(nota1*peso1)+(nota2*peso2)+(nota3*peso3);
   
    mediafinal=media/mediafinal;

    if(mediafinal >=7.0 && mediafinal >=10){
        printf("ALUNO APROVADO %f\n",mediafinal);
    }
    else{
        printf("ALUNO REPROVADO \n");
    }

    return 0;

}
