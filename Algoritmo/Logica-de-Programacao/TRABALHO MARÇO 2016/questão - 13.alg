Algoritmo "questão - 13"
// Disciplina   : [Algoritmo e Lógica de Programação]
// Professor    : Elidiane Martins
// Descrição   : função para faca = média da soma
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2016
Var
   // Seção de Declarações das variáveis
   num,aux,n:inteiro
   media,soma:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

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

   escreval("A soma dos 10 numeros inteiros é ",soma)

   escreval("A média da soma dos 10 númmero inteiros é ",media)

   escreval("o maior numero é ",n+9)

   escreval("O menor numero é ",n)

Fimalgoritmo