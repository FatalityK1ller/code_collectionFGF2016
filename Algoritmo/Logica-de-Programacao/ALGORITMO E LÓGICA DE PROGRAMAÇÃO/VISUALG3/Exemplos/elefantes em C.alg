//

Algoritmo "elefantes2"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor(a): Antonio Carlos Nicolodi
// Descrição   : Um elefante incomoda um monte de gente !!!
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
   texto1 := " elefante"
   texto5 := " muita gente"
   texto2 := " inc"
   texto3 := " muito mais"
   texto4 := " muito menos"
   texto5 := " muita gente"
   texto  := ""
   contar := 1
   Limpatela
   Escreval(contar,texto1+texto2+texto5)
   PARA indice de 2 ATÉ 10 FAÇA
       contar := 0
       Se ((indice mod 2)=0) ENTÃO
          Flag1 := (contar < indice)
          Enquanto Flag1 FAÇA
              texto := texto + texto2
              contar := contar + 1
              Flag1 := (contar < indice)
          FimEnquanto
          Escreval(indice,texto1+texto+texto3)
          texto := ""
       SENÃO
          Escreval(indice,texto1+texto2+texto5)
       FIMSE
  FIMPARA

// INVERTE
   Escreval(" ==============================================================")

   PARA Indice DE 1 ATÉ 10 FAÇA
        texto  := texto+Texto2
   FIMPARA
   contar := Indice - 1
   Escreval(contar,texto1+texto+texto5)
   texto  := ""
   PARA indice de 9 ATÉ 1 PASSO -1 FAÇA
        contar := 0
        Se ((indice mod 2)=1) ENTÃO
           Flag1 := (contar < indice)
           Enquanto Flag1 FAÇA
               texto := texto + texto2
               contar := contar + 1
               Flag1 := (contar < indice)
           FimEnquanto
           Escreval(indice,texto1+texto+texto4)
           texto := ""
        SENÃO
           Escreval(indice,texto1+texto2+texto5)
        FIMSE
   FIMPARA
Fimalgoritmo

