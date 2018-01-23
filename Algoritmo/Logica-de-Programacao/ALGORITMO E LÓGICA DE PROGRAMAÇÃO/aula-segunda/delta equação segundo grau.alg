algoritmo "Equuação do Grau"
// Função :determinar quantas raizes reais existem
// Autor :cleilson
// Data : 18/03/2016
// Seção de Declarações
var
a,b,c,delta:real
x1,x2,equacao,equacao1:real
inicio
// Seção de Comandos
// determinar uantas raizes reais a equuação do segundo grau possui a*x^2+b*x+c=0
escreval("informe valor de - a ")
leia(a)
escreval("informe valor de - b ")
leia(b)
escreval("informe valor de - c ")
leia(c)

delta<-((b^2)-(4*a*c))     // calculo do delta  b²–4*a*c, constante para calculo
escreval("o valor de delta é : ",delta)



se delta > 0 entao        // condição para calculo caso delta seja maior quue 0
x1<-(-b+(raizq(delta)))/2*a  // fórmula de baskara da equação do segundo grau
x2<-(-b-(raizq(delta)))/2*a
   escreval("Existem duas raizes reais iguais à ",x1," e ",x2)
senao
   se delta = 0 entao        // condição para calculo caso delta seja igual 0
      escreval("Existe uma rai real igual à ",x1)
   senao
      se delta < 0 entao     // condição para calculo caso delta seja menor que 0
         escreval("Não existe raiz real, pois delta é menor que 0 ")
      fimse
   fimse
fimse

escreval("-----------------------------------------------------")

equacao<-(a*(x1^2)+(b*x1)+c)      // aplicação dos valores enconrtados na fórmula do segundo grau
escreval("Resultado da equaçao do segundo grau, x1,  ax²+bx+c=0 igual a : ",equacao)

equacao1<-(a*(x2^2)+(b*x2)+c)
escreval("Resultado da equação do segundo grau, x2, ax²+bx+c=0 igual a : ",equacao1)



fimalgoritmo
