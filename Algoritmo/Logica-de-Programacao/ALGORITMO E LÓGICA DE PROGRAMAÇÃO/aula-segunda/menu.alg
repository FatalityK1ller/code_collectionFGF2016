algoritmo "MENU"
// Fun��o :MENU com soma, multiplica��o e dobro
// Autor :cleilson
// Data : 16/03/2016
// Se��o de Declara��es
var
oper:caractere
num1,num2,nu1,nu2,n,soma_resul,mult:inteiro
dobro:real
inicio
// Se��o de Comandos
escreval("Menu de op��es")
escreval("1- soma")
escreval("2- multiplica��o")
escreval("3- dobro")
escreval("Selecione a op��o a ser realizada")
leia(oper)
limpatela

se (oper = "1") entao
   escreval("escreva o primeiro numero")
   leia(num1)
   escreval("escreva o segundo numero")
   leia(num2)
   soma_resul<-(num1+num2)
   escreval("O resultado � ",soma_resul)
senao
se (oper = "2") entao
   escreval("escreva o primeiro n�mero")
   leia(nu1)
   escreval("escreva o segundo n�mero")
   leia(nu2)
   mult<-(nu1*nu2)
   escreval("O resultado da multiplica�ao � ",mult)
senao
se (oper = "3") entao
   escreval("Escreva um n�mero")
   leia(n)
   dobro<-(n^2)
   escreval("O dobro � ",dobro)
fimse
fimse
fimse


fimalgoritmo
