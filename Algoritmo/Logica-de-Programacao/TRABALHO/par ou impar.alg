algoritmo "par ou impar | positivo ou negativo"
// Fun��o :determinar se o valor digitado � par ou impar e + e -
// Autor :cleilson
// Data : 06/03/2016
// Se��o de Declara��es 
var
num:inteiro
inicio
// Se��o de Comandos 

escreval ("Digite um n�mero ")
leia (num)
se (num) MOD 2 = 0 entao     // Operador MOD = resto da divis�o, se MOD 2 = 0 ent�o par, sen�o impar
   escreval ("Este n�mero � par")
senao
   escreval ("Este n�mero � �mpar")
fimse
se num >= 0 entao        // se num = valor digitado maior e igual 0, valor positivo, sen�o negativo
   escreval ("Este n�mero � positivo")
senao
   escreval ("Este n�mero � negativo")
fimse
fimalgoritmo
