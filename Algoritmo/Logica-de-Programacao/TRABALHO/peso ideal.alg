algoritmo "Peso ideal"
// Fun��o :
// Autor :
// Data : 06/03/2016
// Se��o de Declara��es
var
a,peso_ideal,ph,pm:real
x:caractere
inicio
// Se��o de Comandos
escreval("informe sua altura ")
leia(a)

escreval("Para informar seu sexo digite H ou M - para homem ou mulher  ")
leia(x)   // x = informe de identifica��o de sexo

ph<-(72.7*a)-58 // F�rmula de calculo para peso ideal para homem
pm<-(62.1*a)-44.7 // F�rmula de calculo para peso ideal para mulher

se x ="m" entao
   peso_ideal<-(pm)
senao
   se x ="h" entao
      peso_ideal<-(ph)
   fimse
fimse

escreva("O peso ideal para voc� � ",peso_ideal)

fimalgoritmo
