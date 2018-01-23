algoritmo "MENU"
// Função :MENU com soma, multiplicação e dobro
// Autor :cleilson
// Data : 16/03/2016
// Seção de Declarações
var
oper:caractere
num1,num2,nu1,nu2,n,soma_resul,mult:inteiro
dobro:real
inicio
// Seção de Comandos
escreval("Menu de opções")
escreval("1- soma")
escreval("2- multiplicação")
escreval("3- dobro")
escreval("Selecione a opção a ser realizada")
leia(oper)
limpatela

se (oper = "1") entao
   escreval("escreva o primeiro numero")
   leia(num1)
   escreval("escreva o segundo numero")
   leia(num2)
   soma_resul<-(num1+num2)
   escreval("O resultado é ",soma_resul)
senao
se (oper = "2") entao
   escreval("escreva o primeiro número")
   leia(nu1)
   escreval("escreva o segundo número")
   leia(nu2)
   mult<-(nu1*nu2)
   escreval("O resultado da multiplicaçao é ",mult)
senao
se (oper = "3") entao
   escreval("Escreva um número")
   leia(n)
   dobro<-(n^2)
   escreval("O dobro é ",dobro)
fimse
fimse
fimse


fimalgoritmo
