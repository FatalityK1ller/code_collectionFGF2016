Algoritmo "semnome"
// Disciplina   : [Algoritmo e Lógica de Programação] 
// Professor    : Elidiane Martins 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/03/2016
Var
// Seção de Declarações das variáveis 
tempo,velocidade,distancia,litros_usado:real

Inicio


escreval("informe o tempo gasto na viagem")
leia(tempo)

escreval("Informe a velocidade média durante a viagem")
leia(velocidade)

distancia<-tempo*velocidade

litros_usado<-distancia/12

escreval("O tempo gasto na viagem foi de ",tempo," horas")
escreval("A média de velocidade estava em ",velocidade," km/h")
escreval("A distância percorrida na viagem foi de ",distancia," km")
escreval("E a quantidade de litros de combustivel gasto foi de ",litros_usado," litros")

Fimalgoritmo


Fimalgoritmo
