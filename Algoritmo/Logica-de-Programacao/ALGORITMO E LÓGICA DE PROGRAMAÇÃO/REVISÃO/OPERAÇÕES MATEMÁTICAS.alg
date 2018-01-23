algoritmo "OPERAÇÕES MATEMÁTICAS"
// Função :FUNÇÃO SE ENTAO
// Autor :CLEILSON
// Data : 19/03/2016
// Seção de Declarações
var
oper:inteiro
a,b,c,d,f,oper1,total,oper3:real
oper4,oper5:real
inicio
// Seção de Comandos
escreval("---------------------------------------------")
escreva
escreval("        MENU DE OPERAÇÕES MATEMÁTICAS")
escreval("---------------------------------------------")
escreval("1- (A+B)*C")
escreval("2- TOTAL/N")
escreval("3- A-B(C+D^2)/E")
escreval("4- BASE^EXPOENTE")
escreval("5- A*B^C")
escreval
leia(oper)
escreval

se oper = 1 entao
   escreval("Digite valor de a ")
   leia(a)
   escreval("Digite valor de b ")
   leia(b)
   escreval("Digite valor de c ")
   leia(c)

   oper1<-((a+b)*c)
   escreval("O resultado é ",oper1)
fimse

se oper = 2 entao
   escreval("digite o valor de TOTAL")
   leia(a)
   escreval("digite o valor de N")
   leia(b)
   total<-(a/b)
   escreval("Resultado é ",total)
fimse

se oper = 3 entao
   escreval("digite valor de a")
   leia(a)
   escreval("digite valor de b")
   leia(b)
   escreval("digite valor de c")
   leia(c)
   escreval("digite valor de d")
   leia(d)
   escreval("digite valor de e")
   leia(f)
   oper3<-((a-b)*(c+d^2)/f)
   escreval("O resultado é ",oper3)
fimse

se oper = 4 entao
   escreval("Digite valor de BASE")
   leia(a)
   escreval("Digite valor do expoente")
   leia(b)
   oper4<-(a^b)
   escreval("O resultado da operação é : ",oper4)
fimse

se oper = 5 entao
   escreval("Digite valor de A ")
   leia(a)
   escreval("Digite valor de B ")
   leia(b)
   escreval("Digite valor de C ")
   leia(c)
   oper5<-(a*(b^c))
   escreval("O resultado da operação é ",oper5)
fimse

fimalgoritmo
