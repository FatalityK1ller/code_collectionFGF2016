algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 29/02/2016
// Se��o de Declara��es
var
qtd,A,B:real
inicio
// Se��o de Comandos

escreval("Quantidade de livros que deseja comprar ")
leia(qtd)

A<-(0.25*qtd)+7.50
B<-(0.50*qtd)+2.50

se A > B entao
   escreval("Melhor op��o de desconto � A ",A)
senao
   escreval("Melhor op��o de desconto � B ",B)
fimse
fimalgoritmo
