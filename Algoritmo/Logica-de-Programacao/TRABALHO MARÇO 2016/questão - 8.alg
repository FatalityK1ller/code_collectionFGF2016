Algoritmo "questão 9"
// Disciplina   : [Algoritmo e Lógica de Programação] 
// Professor    : Elidiane Martins 
// Descrição   : escolha caso
// Autor(a)    : cleilson
// Data atual  : 31/03/2016
Var
// Seção de Declarações das variáveis 
   x,y,pedido:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("CARDÁPIO LANCHONETE")
escreval("100 - Cachorro quente 1,10")
escreval("101 - Bauru simples 1,30")
escreval("102 - Bauru c/ovo 1,50")
escreval("103 - Hamburger 1,10")
escreval("104 - Cheeseburger 1,30")
escreval("105 - Refrigerante 1,00")
escreval

escreval("Escolha o código do pedido")
leia(x)
escreval
escreval("Quantidade do pedido")
leia(y)

escolha x
caso 100
     x<-1.10
     pedido<-x*y
     escreval(pedido," Reais")
     
caso 101
     x<-1.30
     pedido<-x*y
     escreval(pedido," Reais")
caso 102
     x<-1.50
     pedido<-x*y
     escreval(pedido," Reais")
caso 103
     x<-1.10
     pedido<-x*y
     escreval(pedido," Reais")
caso 104
     x<-1.30
     pedido<-x*y
     escreval(pedido," Reais")
caso 105
     x<-1.00
     pedido<-x*y
     escreval(pedido," Reais")
fimescolha


Fimalgoritmo