Algoritmo "semnome"
// Disciplina   : [Algoritmo e L�gica de Programa��o] 
// Professor    : Elidiane Martins 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/03/2016
Var
// Se��o de Declara��es das vari�veis 
tempo,velocidade,distancia,litros_usado:real

Inicio


escreval("informe o tempo gasto na viagem")
leia(tempo)

escreval("Informe a velocidade m�dia durante a viagem")
leia(velocidade)

distancia<-tempo*velocidade

litros_usado<-distancia/12

escreval("O tempo gasto na viagem foi de ",tempo," horas")
escreval("A m�dia de velocidade estava em ",velocidade," km/h")
escreval("A dist�ncia percorrida na viagem foi de ",distancia," km")
escreval("E a quantidade de litros de combustivel gasto foi de ",litros_usado," litros")

Fimalgoritmo


Fimalgoritmo
