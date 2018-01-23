algoritmo "Equação do segundo grau"
// Função :Fórmula de Baskara
// Autor :cleilson
// Data : 07/03/2016
// Seção de Declarações
var
a,b,c,delta,x1,x2:real
inicio
// Seção de Comandos

escreval("Informe o valor a ")
leia(a)
escreval("Infomre o valor b ")
leia(b)
escreval("Informe o valor c ")
leia(c)

delta<-((b^2)-(4*a*c))
escreval("o valor de delta é : ",delta)

se delta > 0 entao
   x1<-(-b+(raizQ(delta)))/(2*a)
   x2<-(-b-(raizQ(delta)))/(2*a)
   escreva("As raizes são ",x1," e ",x2)
senao
   se delta = 0 entao
      escreva("A raiz é ",x1)
   senao
      se delta < 0 entao
         escreva("Não existe raiz, pois o DELTA é menor que zero")
      fimse
   fimse
fimse


fimalgoritmo
