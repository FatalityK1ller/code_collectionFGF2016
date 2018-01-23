algoritmo "JOGO PEDRA, PAPEL E TESOURA"
// Função :escolha caso e aleatorio
// Autor :cleilson
// Data : 19/03/2016
// Seção de Declarações 
var
jogo:inteiro
esccomp:inteiro
inicio
// Seção de Comandos 

escreval("-- JOGO PEDRA, PAPEL E TESOURA --")
escreval("1-PEDRA")
escreval("2-PAPEL")
escreval("3-TESOURA")
escreval("ESCOLHA UMA DAS OPÇÕES")
leia(jogo)

aleatorio 1,3
leia(esccomp)
aleatorio off
escreva(esccomp)

escolha jogo E esccomp
caso 1
     escreval("EMPATE")
caso 1 E 2
     escreval("VOCÊ PERDEU O JOGO")
caso 1 E 3
     escreval("VOCÊ GANHOU")
caso 2 E 1
     escreval("VOCÊ PERDEU")
caso 2 E 3
     escreval("VOCÊ PERDEU")
caso 2 E 2
     escreval("EMPATE")
caso 3 E 1
     escreval("VOCÊ PERDEU")
caso 3 E 2
     escreval("VOCÊ GANHOU")
caso 3 E 3
     escreval("EMPATE")
     
fimescolha
fimalgoritmo
