algoritmo "media duas notas "
// Função :media e condição se
// Autor :cleilson
// Data : 26/02/2016
// Seção de Declarações
var
nota1,nota2,media:real
inicio
// Seção de Comandos
escreva("Informe nota 1 : ")
leia(nota1)

escreva("Informe nota 2 : ")
leia(nota2)

media<-(nota1+nota2)/2
escreval("A média do aluno é : ",media)

se media >= 7 entao
   escreval(" APROVADO")
senao
   escreval(" REPROVADO")
fimse
fimalgoritmo
