algoritmo "semnome"
// Função :
// Autor :
// Data : 18/03/2016
// Seção de Declarações
var
menu:inteiro
valor,vf:real
inicio
// Seção de Comandos

escreval("MENU DE TELA DE VENDAS")
escreval("========================")
escreval("1-Venda a vista")
escreval("2-Venda a prazo 30 dias")
escreval("3-Venda a prazo 60 dias")
escreval("4-Venda a prazo 90 dias")
escreval("5-Venda com cartão de débito")
escreval("6-Venda com cartão de crédito")
leia(menu)

escreval("Digite o valor da compra")
leia(valor)

escolha menu
caso 1
     vf<-valor-(valor*0.10)
     escreval("Valor com desconto é ",vf)
caso 2
     vf<-(valor*0.05)-valor
     escreval("Valor de desconto na compra é ",vf)
caso 3
     escreval("Sem desconto")
caso 4
     vf<-(valor*0.05)+valor
     escreval("valor com forma de pagamento fica em ",vf)
caso 5
     vf<-valor-(valor*0.08)
     escreval("Valor com desconto de pagamento fica em ",vf)
caso 6
     vf<-valor-(valor*0.07)
     escreval("Valor com desconto de pagamento fica em ",vf)
outrocaso
         escreval("Sem desconto a ser oferecido")
fimescolha


fimalgoritmo
