Algoritmo "quuestão 5"
// Disciplina   : [Algoritmo e Lógica de Programação]
// Professor    : Elidiane Martins
// Descrição   : imprimir na ordem inversa
// Autor(a)    : cleilson
// Data atual  : 30/03/2016
Var
   // Seção de Declarações das variáveis
   numA,numB:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreval("Digite o Primeiro valor")
   leia(numA)

   escreval("Digite o Segundo valor")
   leia(numB)

   se numA > numB entao
      escreval(numB,numA)
   senao
      se numA < numB entao
         escreval(numB,numA)
      senao
         escreval(numA,numB)
      fimse
   fimse




Fimalgoritmo