algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 23/03/2016
// Se��o de Declara��es
var
num,aux,N:inteiro
soma:inteiro
inicio
// Se��o de Comandos

escreva("Digite o valor de N ")
leia(N)

num<-1
aux<-0

para num de 1 ate N faca
     aux<-aux+num
     escreva(aux)

fimpara

escreval

aux<-N-aux-num+1
escreva(aux)

aux<-N-aux-num-4
escreva(aux)


fimalgoritmo
