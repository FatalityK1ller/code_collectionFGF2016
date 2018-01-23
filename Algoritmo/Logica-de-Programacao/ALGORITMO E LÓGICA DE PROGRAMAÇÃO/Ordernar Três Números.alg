algoritmo "Ordenar três números inteiros"
// Função : Mostrar em ordem decrescente três números inteiros
// Autor : Anderson Ferreira Diniz
// Data : 21/09/2011
// Seção de Declarações
var
x, y, z: inteiro
inicio
// Seção de Comandos
escreval ("Informe o primeiro número")
leia (x)
escreval ("Informe o segundo número")
leia (y)
escreval ("Informe o terceiro número")
leia (z)

se (x > y) entao
 se (x > z) entao
  se (y > z) entao
     escreval ("A ordem é: ", x, ",", y, ",",z)
  senao
       escreval ("A ordem é: ", x, ",", z, ",", y)
  fimse
  fimse
  fimse
se (x < y) entao
 se (y > z) entao
  se (x > z) entao
     escreval ("A ordem é: ", y, ",", x, ",", z)
  senao
       escreval ("A ordem é: ", y, ",", z, ",", x)
 fimse
  fimse
  fimse

se (x < y) entao
 se (y < z) entao
       escreval ("A ordem é: ", z, ",", y, ",", x)
 fimse
  fimse


se (x > y) entao
 se (x < z) entao
    escreval ("A ordem é: ", z, ",", x, ",", y)
fimse
fimse

fimalgoritmo
fimalgoritmo
