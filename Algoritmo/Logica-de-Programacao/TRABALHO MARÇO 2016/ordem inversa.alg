algoritmo "semnome"
// Função :
// Autor :
// Data : 02/04/2016
// Seção de Declarações
var
a,b,c:inteiro

inicio
// Seção de Comandos

escreval("digite o primeiro numero ")
leia(a)
escreval("digite o segundo numero ")
leia(b)
escreval("digite o terceiro numero ")
leia(c)

se a > b entao
   se a > c entao
      se b > c entao
         escreval(a,b,c)
      senao
           escreval(a,c,b)
      fimse
   fimse
fimse

se a < b entao
   se b > c entao
      se a > c entao
         escreval(b,a,c)
      senao
           escreval(b,c,a)
      fimse
   fimse
fimse

se a < b entao
   se b < c entao
      escreval(c,b,a)
   fimse
fimse

se a> b entao
   se a < c entao
      escreval(c,a,b)
   fimse
fimse




fimalgoritmo
