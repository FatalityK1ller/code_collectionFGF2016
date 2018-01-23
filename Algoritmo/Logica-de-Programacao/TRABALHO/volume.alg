algoritmo "Volume"
// Função :calcular o volume
// Autor :cleilson
// Data : 07/03/2016
// Seção de Declarações
var
h,r,v,l:real // h= latura / r= raio / v= volume / l= litros
inicio
// Seção de Comandos
h<-(0.80) // valor correspondente a altura do galão
r<-(0.10) // valor corresponde ao raio d galão

v<-(Pi*(r*r))*h  // fórmula representada pelo calculo de Pi=3.14 x o quadrado do raio x altura
escreval("O volume exato do galão de água é ")
escreval(v," metros cubicos")                        // medida de volume dada em metros cubicos

escreval("===================================")
l<-(v*1000)
escreval("O volume em litros corresponde à ")  // conversão para litros = multilplicando 1000
escreval(l," litros")


fimalgoritmo
