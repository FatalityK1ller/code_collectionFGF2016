algoritmo "Equua��o do Grau"
// Fun��o :determinar quantas raizes reais existem
// Autor :cleilson
// Data : 18/03/2016
// Se��o de Declara��es
var
a,b,c,delta:real
x1,x2,equacao,equacao1:real
inicio
// Se��o de Comandos
// determinar uantas raizes reais a equua��o do segundo grau possui a*x^2+b*x+c=0
escreval("informe valor de - a ")
leia(a)
escreval("informe valor de - b ")
leia(b)
escreval("informe valor de - c ")
leia(c)

delta<-((b^2)-(4*a*c))     // calculo do delta  b��4*a*c, constante para calculo
escreval("o valor de delta � : ",delta)



se delta > 0 entao        // condi��o para calculo caso delta seja maior quue 0
x1<-(-b+(raizq(delta)))/2*a  // f�rmula de baskara da equa��o do segundo grau
x2<-(-b-(raizq(delta)))/2*a
   escreval("Existem duas raizes reais iguais � ",x1," e ",x2)
senao
   se delta = 0 entao        // condi��o para calculo caso delta seja igual 0
      escreval("Existe uma rai real igual � ",x1)
   senao
      se delta < 0 entao     // condi��o para calculo caso delta seja menor que 0
         escreval("N�o existe raiz real, pois delta � menor que 0 ")
      fimse
   fimse
fimse

escreval("-----------------------------------------------------")

equacao<-(a*(x1^2)+(b*x1)+c)      // aplica��o dos valores enconrtados na f�rmula do segundo grau
escreval("Resultado da equa�ao do segundo grau, x1,  ax�+bx+c=0 igual a : ",equacao)

equacao1<-(a*(x2^2)+(b*x2)+c)
escreval("Resultado da equa��o do segundo grau, x2, ax�+bx+c=0 igual a : ",equacao1)



fimalgoritmo
