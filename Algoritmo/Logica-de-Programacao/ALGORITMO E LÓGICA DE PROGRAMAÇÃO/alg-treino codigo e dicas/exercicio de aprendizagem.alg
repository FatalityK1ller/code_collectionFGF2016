algoritmo "exercicio de aprendizagem"
// Fun��o :
// Autor :
// Data : 27/02/2016
// Se��o de Declara��es
// Fa�a um algoritmo que receba o valor de um deposito e o valor da taxa de juros, calcule e mostre o
// valor do redimento e o valor total do rendimento.
var
valord,vt,vr,vtdr:real
inicio
// Se��o de Comandos
escreva("Insira o valor do deposito......:")
leia(valord)
escreva("Insira o valor da TAXA de juros.:")
leia(vt)

vr<-(valord*vt)/100
vtdr<-vr+valord
limpatela

escreval("Rendimento total de....:",vr)
escreval("Valor total dispon�vel.:",vtdr)

fimalgoritmo
