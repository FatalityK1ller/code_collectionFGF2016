algoritmo "TITULA��O"
// Fun��o :Verificar Titulo Ne (peso x comprimento)
// Autor : cleilson
// Data : 20/02/2016
// Se��o de Declara��es 
var
NE,JARDAS,CONSTANTE,AMOSTRA1,AMOSTRA2,MEDIA,margem_erro1,margem_erro2:real
inicio
// Se��o de Comandos
escreval("informe NE")
// Ne = medida de titulo ingl�s
    leia(NE)
// uma das medidas de comprimento usada na titula��o em industria t�xtil
escreval("informe quatidades de jardas")
    leia(JARDAS)
    
// Constante obtida atraves da quantidade de voltas(jardas)=medida de comprimento adotada, multiplicada pela constante 0.54 para obter valor em titulo ingl�s(Ne)
    CONSTANTE<-JARDAS*0.54
             escreval("constante de calculo",CONSTANTE)
             
// Valor das amostras inseridos em gramas para serem convertidos atraves da divis�o com a constante obtida

             escreval("digite amostra 1")
                 leia(AMOSTRA1)
                 
             escreval("digite amostra 2")
                 leia(AMOSTRA2)

    MEDIA<-((CONSTANTE/AMOSTRA1)+(CONSTANTE/AMOSTRA2))/2
            escreval("M�dia : ",MEDIA)
            
// percentual de toler�ncia de 2% para mais ou menos
                  margem_erro1<-((NE*2)/100)+NE
                         escreval("2 porcentos ",margem_erro1)
                 margem_erro2<-((NE*(-2))/100)+NE
                         escreval("2 porcentos ",margem_erro2)
              
                                  se MEDIA > margem_erro1 ENTAO
                                         escreva("AJUSTE",MEDIA)
                                  senao
                                         escreva("N�O AJUSTE")
                               

                     fimse


fimalgoritmo
