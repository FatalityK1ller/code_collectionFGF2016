Algoritmo "quuest�o - 11"
// Disciplina   : [Algoritmo e L�gica de Programa��o]
// Professor    : Elidiane Martins
// Descri��o   : fun��o numpcarac
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2016
Var
   // Se��o de Declara��es das vari�veis

   num:inteiro
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...

   escreval("Digite um n�mero de 1 a 10")
   leia(num)


   se num > 10 entao
      escreval("N�MERO INV�LIDO")
      se num < 1 entao
         escreval("N�UMERO INV�LIDO")
      fimse
   fimse
   

   escreval(numpcarac(num)) // converte n�mero inteiro ou real em caractere


Fimalgoritmo