algoritmo "maior e menor"
// Fun��o :apresente 5 valores inteiros e informe o maior e menor
// Autor :cleilson
// Data : 06/03/2016
// Se��o de Declara��es
var
maior_valor,menor_valor,num,cont:inteiro
inicio
// Se��o de Comandos

Para cont de 1 ate 5 passo 1 faca
   Escreva ("Digite o ",cont," numero ")
   leia(num)
   se cont = 1 entao
      maior_valor <- num
      menor_valor <- num
   senao
      se num > maior_valor entao
         maior_valor <- num
         se num < menor_valor entao
            menor_valor <- num
         fimse
      fimse
   fimse
fimpara

escreval (" o maior numero �: ",maior_valor)
escreval (" o menor numero �: ",menor_valor)


fimalgoritmo
