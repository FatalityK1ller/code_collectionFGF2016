algoritmo "A>B>C OU <"
// Função :
// Autor :
// Data : 26/02/2016
// Seção de Declarações
var
A,B,C,Maior:real
inicio
// Seção de Comandos
escreval("Digite três valores : ")
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
escreva("O maior valor será", Maior)
fimalgoritmo
