Algoritmo "quest�o - 6"
// Disciplina   : [Algoritmo e L�gica de Programa��o]
// Professor    : Elidiane Martins
// Descri��o   : calculo do imposto de renda
// Autor(a)    : cleilson
// Data atual  : 30/03/2016
Var
   // Se��o de Declara��es das vari�veis

    sal,ir:real
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...

   escreval("Informe seu salario")
   leia(sal)

   se sal >= 3000 entao
      ir<-sal*0.15
      escreval("O valor do seu imposto de renda � de ",ir," Reais")
   senao
      se sal >=1500 entao
         ir<-sal*0.07
         escreval("O valor do seu imposto de renda � de ",ir," Reais")
      senao
         se sal < 1500 entao
            escreval("ISENTO DA DECLARA��O DE IMPOSTO DE RENDA")
         fimse
      fimse
   fimse


Fimalgoritmo