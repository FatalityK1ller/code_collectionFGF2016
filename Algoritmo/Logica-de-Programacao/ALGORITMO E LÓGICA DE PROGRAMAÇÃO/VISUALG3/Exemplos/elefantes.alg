Algoritmo "semnome"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor(a): Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 08/09/2015
Var
   // Seção de Declarações das variáveis
   contar, indice : inteiro
   texto1,texto2,texto3,texto4,texto5,texto : caracter
   Flag1,Flag2 : logico
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   Flag1  := verdadeiro
   Flag2  := verdadeiro
   texto1 := " elefante"
   texto5 := " muita gente"
   texto2 := " incomodam"
   texto3 := " muito mais"
   texto4 := " menos"
   texto5 := " muita gente"
   texto  := texto2
   contar := 0
   Limpatela
   Enquanto Flag1 FAÇA

      contar := contar + 1
      Escreval(contar,texto1+texto2+texto5)
      PARA indice de 1 ATÉ contar FAÇA
           texto := texto + texto2
      FIMPARA

      Escreval(indice,texto1+texto+texto3)

      se contar > 3 entao
         flag1 := falso
      fimse

   FimEnquanto


Fimalgoritmo