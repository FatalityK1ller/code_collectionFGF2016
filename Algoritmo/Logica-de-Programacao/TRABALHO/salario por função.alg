algoritmo "cargos e salarios por percentual"
// Função :exibir valor salario novo e salario velho e diferença
// Autor :cleilson
// Data : 06/03/2016
// Seção de Declarações
var
sa,gerente,engenheiro,tecnico,outros,sag:real
sae,sat,sao:real
ca:caractere
inicio
// Seção de Comandos

escreval("Digite seu salario")
leia(sa)

escreval("ESCOLHA AS SEGUINTES OPÇÕES DE CARGO PARA CALCULO")
escreval("gerente - enegenheiro - técnico - outros ")
leia(ca)

gerente<-(sa*10)/100
engenheiro<-(sa*20)/100
tecnico<-(sa*30)/100
outros<-(sa*40)/100

se ca = "gerente" entao
   sag<-gerente+sa       // salario gerente mais percentual
   escreval("Salario novo é de ",sag," reais")
   escreval("Salario velho é ",sa," Reais")
   escreval("Diferença salarial é de ",gerente," Reais")
fimse
se ca = "engenheiro" entao
   sae<-engenheiro+sa      // salario engenheiro mais percentual
   escreval("Salario novo é de ",sae," reais")
   escreval("Salario velho é ",sa," Reais")
   escreval("Diferença salarial é de ",engenheiro," Reais")
fimse
se ca = "técnico" entao
   sat<-tecnico+sa     // salario tecnico mais percentual
   escreval("Salario novo é de ",sat," reais")
   escreval("Salario velho é ",sa," Reais")
   escreval("Diferença salarial é de ",tecnico," Reais")
fimse
se ca = "outros" entao
   sao<-outros+sa    // salario referente a outras funções mais percentual
   escreval("Salario novo é de ",sao," reais")
   escreval("Salario velho é ",sa," Reais")
   escreval("Diferença salarial é de ",outros," Reais")
fimse


fimalgoritmo
