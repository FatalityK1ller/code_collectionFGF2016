algoritmo "10 prestações com juros"
// Função :calculo de parcelamento
// Autor :cleilson
// Data : 26/02/2016
// Seção de Declarações 
var
valor_compra,prestacoes:real
inicio
// Seção de Comandos 
escreval("Valor da compra R$ : ")
leia(valor_compra)

// Calculo do valor unitario das 10 prestações parceladas
prestacoes<-((valor_compra*2)/100+valor_compra)/10
escreval("Loja Infotec - Valor das 10 prestações com juros de 2% : ",prestacoes, " Reais")


fimalgoritmo
