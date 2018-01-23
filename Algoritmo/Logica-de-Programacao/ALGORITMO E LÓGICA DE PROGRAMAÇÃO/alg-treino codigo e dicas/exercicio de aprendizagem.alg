algoritmo "exercicio de aprendizagem"
// Função :
// Autor :
// Data : 27/02/2016
// Seção de Declarações
// Faça um algoritmo que receba o valor de um deposito e o valor da taxa de juros, calcule e mostre o
// valor do redimento e o valor total do rendimento.
var
valord,vt,vr,vtdr:real
inicio
// Seção de Comandos
escreva("Insira o valor do deposito......:")
leia(valord)
escreva("Insira o valor da TAXA de juros.:")
leia(vt)

vr<-(valord*vt)/100
vtdr<-vr+valord
limpatela

escreval("Rendimento total de....:",vr)
escreval("Valor total disponível.:",vtdr)

fimalgoritmo
