algoritmo "M�DIA"
// Fun��o :Calcular a m�dia e informar aprovado, reprovado ou recupera��o
// Autor :cleilson
// Data : 29/02/2016
// Se��o de Declara��es
var
n1,n2,n3,media:real
inicio
// Se��o de Comandos

escreval("NOTA 1 ")
leia(n1)

escreval("NOTA 2 ")
leia(n2)

escreval("NOTA 3 ")
leia(n3)

media<-(n1+n2+n3)/3


se media >=7 entao
   escreval("A m�dia do aluno � ",media)
   escreval("APROVADO")
fimse
se media <=5 entao
   escreval("A m�da do aluno � ",media)
   escreval("REPROVADO")
fimse
se (media >=5.1) E (media<=6.9) entao
   escreval("A m�dia do aluno � ",media)
   escreval("RECUPERA��O")
fimse




fimalgoritmo
