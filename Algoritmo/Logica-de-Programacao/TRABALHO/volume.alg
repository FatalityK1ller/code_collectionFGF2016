algoritmo "Volume"
// Fun��o :calcular o volume
// Autor :cleilson
// Data : 07/03/2016
// Se��o de Declara��es
var
h,r,v,l:real // h= latura / r= raio / v= volume / l= litros
inicio
// Se��o de Comandos
h<-(0.80) // valor correspondente a altura do gal�o
r<-(0.10) // valor corresponde ao raio d gal�o

v<-(Pi*(r*r))*h  // f�rmula representada pelo calculo de Pi=3.14 x o quadrado do raio x altura
escreval("O volume exato do gal�o de �gua � ")
escreval(v," metros cubicos")                        // medida de volume dada em metros cubicos

escreval("===================================")
l<-(v*1000)
escreval("O volume em litros corresponde � ")  // convers�o para litros = multilplicando 1000
escreval(l," litros")


fimalgoritmo
