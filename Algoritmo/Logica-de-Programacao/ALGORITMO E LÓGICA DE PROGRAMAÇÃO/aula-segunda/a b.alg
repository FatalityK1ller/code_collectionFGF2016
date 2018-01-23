algoritmo "semnome"
// Função :
// Autor :
// Data : 29/02/2016
// Seção de Declarações
var
qtd,A,B:real
inicio
// Seção de Comandos

escreval("Quantidade de livros que deseja comprar ")
leia(qtd)

A<-(0.25*qtd)+7.50
B<-(0.50*qtd)+2.50

se A > B entao
   escreval("Melhor opção de desconto é A ",A)
senao
   escreval("Melhor opção de desconto é B ",B)
fimse
fimalgoritmo
