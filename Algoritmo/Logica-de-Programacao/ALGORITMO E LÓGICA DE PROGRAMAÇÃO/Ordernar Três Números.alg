algoritmo "Ordenar tr�s n�meros inteiros"
// Fun��o : Mostrar em ordem decrescente tr�s n�meros inteiros
// Autor : Anderson Ferreira Diniz
// Data : 21/09/2011
// Se��o de Declara��es
var
x, y, z: inteiro
inicio
// Se��o de Comandos
escreval ("Informe o primeiro n�mero")
leia (x)
escreval ("Informe o segundo n�mero")
leia (y)
escreval ("Informe o terceiro n�mero")
leia (z)

se (x > y) entao
 se (x > z) entao
  se (y > z) entao
     escreval ("A ordem �: ", x, ",", y, ",",z)
  senao
       escreval ("A ordem �: ", x, ",", z, ",", y)
  fimse
  fimse
  fimse
se (x < y) entao
 se (y > z) entao
  se (x > z) entao
     escreval ("A ordem �: ", y, ",", x, ",", z)
  senao
       escreval ("A ordem �: ", y, ",", z, ",", x)
 fimse
  fimse
  fimse

se (x < y) entao
 se (y < z) entao
       escreval ("A ordem �: ", z, ",", y, ",", x)
 fimse
  fimse


se (x > y) entao
 se (x < z) entao
    escreval ("A ordem �: ", z, ",", x, ",", y)
fimse
fimse

fimalgoritmo
fimalgoritmo
