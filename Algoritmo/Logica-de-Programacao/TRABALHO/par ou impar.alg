algoritmo "par ou impar | positivo ou negativo"
// Função :determinar se o valor digitado é par ou impar e + e -
// Autor :cleilson
// Data : 06/03/2016
// Seção de Declarações 
var
num:inteiro
inicio
// Seção de Comandos 

escreval ("Digite um número ")
leia (num)
se (num) MOD 2 = 0 entao     // Operador MOD = resto da divisão, se MOD 2 = 0 então par, senão impar
   escreval ("Este número é par")
senao
   escreval ("Este número é ímpar")
fimse
se num >= 0 entao        // se num = valor digitado maior e igual 0, valor positivo, senão negativo
   escreval ("Este número é positivo")
senao
   escreval ("Este número é negativo")
fimse
fimalgoritmo
