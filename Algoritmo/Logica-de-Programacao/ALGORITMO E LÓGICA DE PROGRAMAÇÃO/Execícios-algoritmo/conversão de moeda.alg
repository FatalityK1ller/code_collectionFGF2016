algoritmo "convers�o de dolar para real"
// Fun��o :convers�o de moeda
// Autor :cleilson
// Data : 26/02/2016
// Se��o de Declara��es
var
dolar,US,RS:real

inicio
// Se��o de Comandos
// Insira o cota��o do dolar atual
escreva("informe a cota��o do dolar atual : ")
leia(dolar)

// Insira o valor a ser convertido para reais
escreva("Informe o valor em dolar US$ : ")
leia(US)

RS<-(US*dolar)
escreva(RS, " R$ Reais")
fimalgoritmo
