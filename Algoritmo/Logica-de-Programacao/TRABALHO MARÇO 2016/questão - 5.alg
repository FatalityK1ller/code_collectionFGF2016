Algoritmo "quuest�o 5"
// Disciplina   : [Algoritmo e L�gica de Programa��o]
// Professor    : Elidiane Martins
// Descri��o   : imprimir na ordem inversa
// Autor(a)    : cleilson
// Data atual  : 30/03/2016
Var
   // Se��o de Declara��es das vari�veis
   numA,numB:inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...

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