Algoritmo "quest�o - 13"
// Disciplina   : [Algoritmo e L�gica de Programa��o]
// Professor    : Elidiane Martins
// Descri��o   : fun��o para faca = m�dia da soma
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2016
Var
   // Se��o de Declara��es das vari�veis
   num,aux,n:inteiro
   media,soma:real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...

   aux<-1
   n<-1
   soma<-0

   para num de 0 ate 9 faca
      aux<-num+n
      escreva(aux)

      escreval

      soma<-soma+num+1

      media<-soma/10

   fimpara

   escreval("A soma dos 10 numeros inteiros � ",soma)

   escreval("A m�dia da soma dos 10 n�mmero inteiros � ",media)

   escreval("o maior numero � ",n+9)

   escreval("O menor numero � ",n)

Fimalgoritmo