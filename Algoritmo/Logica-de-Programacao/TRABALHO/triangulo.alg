algoritmo "semnome"
// Função :
// Autor :
// Data : 18/03/2016
// Seção de Declarações
var
a,b,c,maior,soma:real
inicio
// Seção de Comandos

escreval("Valor de (a)")
leia(a)
escreval("Valor de (b)")
leia(b)
escreval("Valor de (c)")
leia(c)

se (a > b) e (a > c) entao
   maior<-(a)
   soma<-(b+c)
senao
   se (b > c) entao
      maior<-(b)
      soma<-(a+c)
   senao
      maior<-(c)
      soma<-(a+b)
   fimse
fimse


fimalgoritmo
