algoritmo "Equa��o do segundo grau"
// Fun��o :F�rmula de Baskara
// Autor :cleilson
// Data : 07/03/2016
// Se��o de Declara��es
var
a,b,c,delta,x1,x2:real
inicio
// Se��o de Comandos

escreval("Informe o valor a ")
leia(a)
escreval("Infomre o valor b ")
leia(b)
escreval("Informe o valor c ")
leia(c)

delta<-((b^2)-(4*a*c))
escreval("o valor de delta � : ",delta)

se delta > 0 entao
   x1<-(-b+(raizQ(delta)))/(2*a)
   x2<-(-b-(raizQ(delta)))/(2*a)
   escreva("As raizes s�o ",x1," e ",x2)
senao
   se delta = 0 entao
      escreva("A raiz � ",x1)
   senao
      se delta < 0 entao
         escreva("N�o existe raiz, pois o DELTA � menor que zero")
      fimse
   fimse
fimse


fimalgoritmo
