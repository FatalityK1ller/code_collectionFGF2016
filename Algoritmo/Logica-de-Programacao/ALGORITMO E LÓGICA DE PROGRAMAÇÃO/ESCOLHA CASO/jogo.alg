algoritmo "JOGO PEDRA, PAPEL E TESOURA"
// Fun��o :escolha caso e aleatorio
// Autor :cleilson
// Data : 19/03/2016
// Se��o de Declara��es 
var
jogo:inteiro
esccomp:inteiro
inicio
// Se��o de Comandos 

escreval("-- JOGO PEDRA, PAPEL E TESOURA --")
escreval("1-PEDRA")
escreval("2-PAPEL")
escreval("3-TESOURA")
escreval("ESCOLHA UMA DAS OP��ES")
leia(jogo)

aleatorio 1,3
leia(esccomp)
aleatorio off
escreva(esccomp)

escolha jogo E esccomp
caso 1
     escreval("EMPATE")
caso 1 E 2
     escreval("VOC� PERDEU O JOGO")
caso 1 E 3
     escreval("VOC� GANHOU")
caso 2 E 1
     escreval("VOC� PERDEU")
caso 2 E 3
     escreval("VOC� PERDEU")
caso 2 E 2
     escreval("EMPATE")
caso 3 E 1
     escreval("VOC� PERDEU")
caso 3 E 2
     escreval("VOC� GANHOU")
caso 3 E 3
     escreval("EMPATE")
     
fimescolha
fimalgoritmo
