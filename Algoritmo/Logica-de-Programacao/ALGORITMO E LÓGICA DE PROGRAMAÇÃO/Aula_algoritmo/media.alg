algoritmo "media duas notas "
// Fun��o :media e condi��o se
// Autor :cleilson
// Data : 26/02/2016
// Se��o de Declara��es
var
nota1,nota2,media:real
inicio
// Se��o de Comandos
escreva("Informe nota 1 : ")
leia(nota1)

escreva("Informe nota 2 : ")
leia(nota2)

media<-(nota1+nota2)/2
escreval("A m�dia do aluno � : ",media)

se media >= 7 entao
   escreval(" APROVADO")
senao
   escreval(" REPROVADO")
fimse
fimalgoritmo
