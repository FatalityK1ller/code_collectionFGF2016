algoritmo "saldo bancario"
// Fun��o :calcular valor do cheque adicionado
// Autor :cleilson
// Data : 26/02/2016
// Se��o de Declara��es 
var
saldo,cheque,saldo_final:real
inicio
// Se��o de Comandos 

// Saldo positivo no banco de 500,00 Reais
saldo<-(500.00)

// Cheque com valor adicionado
escreval("digite o valor do cheque")
leia(cheque)

saldo_final<-(saldo+cheque)
escreva("Saldo final",saldo_final, " Reais")
fimalgoritmo
