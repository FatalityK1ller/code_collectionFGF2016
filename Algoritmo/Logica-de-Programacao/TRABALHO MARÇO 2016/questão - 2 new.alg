algoritmo "questao 02"
// Disciplina   : [Algoritmo e L�gica de Programa��o] 
// Professor    : Elidiane Martins 
// Fun��o :OPERADORES ARITM�TICOS E CONDI��O ESCOLHA CASO
// Autor :CLEILSON E JEFERSON
// Data : 24/02/2016
// Se��o de Declara��es 
var
x:real
y:inteiro
inicio
repita
escreval("Op��o[1] -- (20 - 15)/2)")
escreval("Op��o[2] -- (20 - 15/2) ")
escreval("Op��o[3] -- 2*5/20 + 30/15*2  ")
escreval("Op��o[4] -- 2*(5/20) + 30/(15*2) ")
escreval("Op��o[5] -- 23 div 4 ")
escreval("Op��o[6] -- 23 mod 4 ")
escreval("Op��o[7] -- 35 div 6 + 2 ")// usado operador de divis�o padr�o retornando valor real
escreval("Op��o[8] -- 35 div 6 � 2 ")// usado operador de divis�o padr�o retornando valor real
escreval("Op��o[9] -- 35 div 6 * 2 ")// usado operador de divis�o padr�o retornando valor real
escreval("Op��o[10] -- sqrt(625) ")
escreval("Op��o[11] -- sqr(20) ^2 + sqrt(21 div 5) ") // coloquei a formula elevado ao expoente 2
leia(y)
ate (y> 0)e(y < 12)
escolha y
 caso 1
      x <- ((20 - 15)/2)
      escreval(x)
 caso 2
     x <- (20 - (15/2))
     escreval(x)
 caso 3
     x <- (((2*5)/20) + (30/(15*2)))
     escreval(x)
 caso 4
      x<- ((2*(5/20)) + (30/(15*2)))
      escreval(x)
 caso 5
      x<- (23/4)
      escreval(x)
 caso 6
      x<-(23 mod 4)
      escreval(x)
 caso 7
      x<-(35/(6 + 2))
      escreval(x)
 caso 8
      x <-(35 / 6-2)
      escreval(x)
 caso 9
      x<-(35 / (6*2))
      escreval(x)
 caso 10
      x<- Raizq(625)
      escreval(x)
 caso 11
      x<- quad(Raizq(20)) + Raizq(21 div 5)
      escreval(x)



fimescolha




fimalgoritmo

