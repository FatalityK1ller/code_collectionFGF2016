Algoritmo "semnome"
// Disciplina   : [Algoritmo e L�gica de Programa��o]
// Professor    : Elidiane Martins
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 25/03/2016
Var
   // Se��o de Declara��es das vari�veis
   n:inteiro
   num:inteiro

funcao numpcarac (num: inteiro) : caractere
fimfuncao



Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...


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