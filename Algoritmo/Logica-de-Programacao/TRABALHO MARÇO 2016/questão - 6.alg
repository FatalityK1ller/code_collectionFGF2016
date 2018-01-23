Algoritmo "questão - 6"
// Disciplina   : [Algoritmo e Lógica de Programação]
// Professor    : Elidiane Martins
// Descrição   : calculo do imposto de renda
// Autor(a)    : cleilson
// Data atual  : 30/03/2016
Var
   // Seção de Declarações das variáveis

    sal,ir:real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreval("Informe seu salario")
   leia(sal)

   se sal >= 3000 entao
      ir<-sal*0.15
      escreval("O valor do seu imposto de renda é de ",ir," Reais")
   senao
      se sal >=1500 entao
         ir<-sal*0.07
         escreval("O valor do seu imposto de renda é de ",ir," Reais")
      senao
         se sal < 1500 entao
            escreval("ISENTO DA DECLARAÇÃO DE IMPOSTO DE RENDA")
         fimse
      fimse
   fimse


Fimalgoritmo