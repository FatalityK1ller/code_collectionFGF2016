Algoritmo "quest�o - 3"
// Disciplina   : [Algoritmo e L�gica de Programa��o] 
// Professor    : Elidiane Martins 
// Descri��o   :
// Autor(a)    : cleilson
// Data atual  : 30/03/2016
Var
// Se��o de Declara��es das vari�veis 
HT,VH,PD,SB,TD,SL:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
// Fa�a um algoritmo que:
// a. Obtenha o valor para a vari�velHT (horas trabalhadas no m�s);
// b. Obtenha o valor para a vari�vel VH (valor hora trabalhada):
// c. Obtenha o valor para a vari�velPD (percentual de desconto);
// d. Calcule o sal�rio bruto => SB = HT * VH;
// e. Calcule o total de desconto => TD = (PD/100)*SB;
// f. Calcule o sal�rio l�quido => SL = SB � TD;
// g. Apresente os valores de: Horas trabalhadas, Sal�rio Bruto, Desconto, Sal�rio Liquido.

escreval("Quantidade de horas trabalhadas no m�s")
leia(HT)

escreval("Valor da hora trabalhada")
leia(VH)

escreval("Valor de percentual de desconto salarial")
leia(PD)

SB<-HT*VH

TD<-(PD/100)*SB

SL<- SB-TD

escreval("Horas trabalhadas correspondem � ",HT," Horas")
escreval("Salario bruto corresponde � ",SB," Reais")
escreval("Desconto saalarial � de ",PD," porcentos, E o sal�rio liquido a receber � de ",SL," Reais")



Fimalgoritmo