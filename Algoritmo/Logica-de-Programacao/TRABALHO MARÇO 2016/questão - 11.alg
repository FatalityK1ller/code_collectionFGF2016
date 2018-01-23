Algoritmo "quuestão - 11"
// Disciplina   : [Algoritmo e Lógica de Programação]
// Professor    : Elidiane Martins
// Descrição   : função numpcarac
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 31/03/2016
Var
   // Seção de Declarações das variáveis

   num:inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreval("Digite um número de 1 a 10")
   leia(num)


   se num > 10 entao
      escreval("NÚMERO INVÁLIDO")
      se num < 1 entao
         escreval("NÚUMERO INVÁLIDO")
      fimse
   fimse
   

   escreval(numpcarac(num)) // converte número inteiro ou real em caractere


Fimalgoritmo