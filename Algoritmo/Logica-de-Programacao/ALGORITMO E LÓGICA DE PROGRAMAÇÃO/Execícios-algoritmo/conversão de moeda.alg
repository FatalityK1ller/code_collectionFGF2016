algoritmo "conversão de dolar para real"
// Função :conversão de moeda
// Autor :cleilson
// Data : 26/02/2016
// Seção de Declarações
var
dolar,US,RS:real

inicio
// Seção de Comandos
// Insira o cotação do dolar atual
escreva("informe a cotação do dolar atual : ")
leia(dolar)

// Insira o valor a ser convertido para reais
escreva("Informe o valor em dolar US$ : ")
leia(US)

RS<-(US*dolar)
escreva(RS, " R$ Reais")
fimalgoritmo
