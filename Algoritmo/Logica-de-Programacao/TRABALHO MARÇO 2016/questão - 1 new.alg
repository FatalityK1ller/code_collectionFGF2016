algoritmo "50 VALORES - SOMA DOS POSITIVOS"
// Disciplina   : [Algoritmo e Lógica de Programação] 
// Professor    : Elidiane Martins 
// Função :PARA FACA e CONDIÇÃO SE ENTAO
// Autor :CLEILSON E JEFERSON
// Data : 24/02/2016
// Seção de Declarações 
var
count, soma, numero, n:inteiro
inicio
count <- 0
soma <- 0
n <- 1
para numero de 1 ate 50 faca
     escreval("Digite o ",n," número: ")
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
escreval("Soma dos numero positivos [",soma,"] e os numero negativos são [",count,"]")

fimalgoritmo

