Algoritmo "semnome"
// Disciplina   : [Algoritmo e Lógica de Programação]
// Professor    : Elidiane Martins
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 25/03/2016
Var
   // Seção de Declarações das variáveis
   n:inteiro
   num:inteiro

funcao numpcarac (num: inteiro) : caractere
fimfuncao



Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...


   escreva("digite um valor para n ")
   leia(n)

   num<-10

   para num de 10 ate n passo -1 faca
      num<-(num-1)
      se num > 0 entao
         escreva(num)
      senao
         escreva
      fimse
   fimpara

   num<-numpcarac(num)
   escreva(num)



Fimalgoritmo