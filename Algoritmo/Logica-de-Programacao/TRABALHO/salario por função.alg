algoritmo "cargos e salarios por percentual"
// Fun��o :exibir valor salario novo e salario velho e diferen�a
// Autor :cleilson
// Data : 06/03/2016
// Se��o de Declara��es
var
sa,gerente,engenheiro,tecnico,outros,sag:real
sae,sat,sao:real
ca:caractere
inicio
// Se��o de Comandos

escreval("Digite seu salario")
leia(sa)

escreval("ESCOLHA AS SEGUINTES OP��ES DE CARGO PARA CALCULO")
escreval("gerente - enegenheiro - t�cnico - outros ")
leia(ca)

gerente<-(sa*10)/100
engenheiro<-(sa*20)/100
tecnico<-(sa*30)/100
outros<-(sa*40)/100

se ca = "gerente" entao
   sag<-gerente+sa       // salario gerente mais percentual
   escreval("Salario novo � de ",sag," reais")
   escreval("Salario velho � ",sa," Reais")
   escreval("Diferen�a salarial � de ",gerente," Reais")
fimse
se ca = "engenheiro" entao
   sae<-engenheiro+sa      // salario engenheiro mais percentual
   escreval("Salario novo � de ",sae," reais")
   escreval("Salario velho � ",sa," Reais")
   escreval("Diferen�a salarial � de ",engenheiro," Reais")
fimse
se ca = "t�cnico" entao
   sat<-tecnico+sa     // salario tecnico mais percentual
   escreval("Salario novo � de ",sat," reais")
   escreval("Salario velho � ",sa," Reais")
   escreval("Diferen�a salarial � de ",tecnico," Reais")
fimse
se ca = "outros" entao
   sao<-outros+sa    // salario referente a outras fun��es mais percentual
   escreval("Salario novo � de ",sao," reais")
   escreval("Salario velho � ",sa," Reais")
   escreval("Diferen�a salarial � de ",outros," Reais")
fimse


fimalgoritmo
