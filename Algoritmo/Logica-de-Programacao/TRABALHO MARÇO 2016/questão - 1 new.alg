algoritmo "50 VALORES - SOMA DOS POSITIVOS"
// Disciplina   : [Algoritmo e L�gica de Programa��o] 
// Professor    : Elidiane Martins 
// Fun��o :PARA FACA e CONDI��O SE ENTAO
// Autor :CLEILSON E JEFERSON
// Data : 24/02/2016
// Se��o de Declara��es 
var
count, soma, numero, n:inteiro
inicio
count <- 0
soma <- 0
n <- 1
para numero de 1 ate 50 faca
     escreval("Digite o ",n," n�mero: ")
     leia(numero)
     se numero > 0 entao
     soma <- soma + numero  // SOMA DOS VALORES POSITIVOS
     senao
          se numero < 0 entao
          count <- n       // CONTADOR DOS VALORES NEGATIVOS
          fimse
     fimse
     n <- n+1
fimpara
escreval("Soma dos numero positivos [",soma,"] e os numero negativos s�o [",count,"]")

fimalgoritmo

