algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 03/03/2016
// Se��o de Declara��es 
var
n1,n2,n3,pr1,pr2,pr3,sr,sr2,sr3:inteiro
inicio
// Se��o de Comandos 
escreval("Escola PROGRAMAR")
escreval("Professor N�vel 1 - 12,00 R$ por hora/aula")
escreval("Professor N�vel 2 - 17,00 R$ por hora/aula")
escreval("Professor N�vel 3 - 25,00 R$ por hora/aula")

n1<-12
n2<-17
n3<-25

escreval("N�vel 1 em horas")
leia(pr1)

sr<-(pr1*n1)
escreval("Salario a receber n�vel 1 ",sr," Reais")

escreval("==================================================")
escreval("==================================================")

escreval("N�vel 2, quantidade de horas")
leia(pr2)

sr2<-(pr2*n2)
escreval("Salario a receber n�vel 2 ",sr2," Reais")

escreval("==================================================")
escreval("==================================================")
escreval("N�vel 3, quantidade de horas")
leia(pr3)

sr3<-(pr3*n3)
escreval("Salario a receber n�vel 3 ",sr3," Reais")

fimalgoritmo
