algoritmo "A>B>C OU <"
// Fun��o :
// Autor :
// Data : 26/02/2016
// Se��o de Declara��es
var
A,B,C,Maior:real
inicio
// Se��o de Comandos
escreval("Digite tr�s valores : ")
leia(A,B,C)

se A>B entao
   se A>C entao
      Maior<-A

   senao
      Maior<-C
   fimse
senao
   se B>C entao
      Maior<-B
   senao
      Maior<-C
   fimse
fimse
escreva("O maior valor ser�", Maior)
fimalgoritmo
