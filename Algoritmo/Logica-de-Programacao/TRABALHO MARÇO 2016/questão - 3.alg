Algoritmo "questão - 3"
// Disciplina   : [Algoritmo e Lógica de Programação] 
// Professor    : Elidiane Martins 
// Descrição   :
// Autor(a)    : cleilson
// Data atual  : 30/03/2016
Var
// Seção de Declarações das variáveis 
HT,VH,PD,SB,TD,SL:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
// Faça um algoritmo que:
// a. Obtenha o valor para a variávelHT (horas trabalhadas no mês);
// b. Obtenha o valor para a variável VH (valor hora trabalhada):
// c. Obtenha o valor para a variávelPD (percentual de desconto);
// d. Calcule o salário bruto => SB = HT * VH;
// e. Calcule o total de desconto => TD = (PD/100)*SB;
// f. Calcule o salário líquido => SL = SB – TD;
// g. Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário Liquido.

escreval("Quantidade de horas trabalhadas no mês")
leia(HT)

escreval("Valor da hora trabalhada")
leia(VH)

escreval("Valor de percentual de desconto salarial")
leia(PD)

SB<-HT*VH

TD<-(PD/100)*SB

SL<- SB-TD

escreval("Horas trabalhadas correspondem à ",HT," Horas")
escreval("Salario bruto corresponde à ",SB," Reais")
escreval("Desconto saalarial é de ",PD," porcentos, E o salário liquido a receber é de ",SL," Reais")



Fimalgoritmo