Algoritmo "semnome"
// Disciplina   : [Algoritmo e L�gica de Programa��o]
// Professor    : Elidiane Martins
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/04/2016
Var
   // Se��o de Declara��es das vari�veis
   dia,mes:inteiro
   data_nas:inteiro


Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...

   escreval("Informe o dia de seu nascimento")
   leia(dia)

   escreval("1 - JANEIRO")
   escreval("2 - FEVEREIRO")
   escreval("3 - MAR�O")
   escreval("4 - ABRIL")
   escreval("5 - MAIO")
   escreval("6 - JUNHO")
   escreval("7 - JULHO ")
   escreval("8 - AGOSTO ")
   escreval("9 - SETEMBRO")
   escreval("10 - OUTUBRO ")
   escreval("11 - NOVEMBRO ")
   escreval("12 - DEZEMBRO  ")
   escreval("Escolha uma das alternativas para sua data de nascimento")
   leia(mes)

   limpatela

   escolha mes
   caso 1
      se (dia >=1) e (dia <=20) entao
         escreval("SEU SIGNO � CAPRICORNIO")
      fimse
      se (dia >=21) e (dia<=30) entao
            escreval("SEU SIGNO � AQUARIO")
         fimse
   caso 2
      se  (dia >=1) e (dia <=19) entao
          escreval("SEU SIGNO � AQUARIO")
      fimse
      se (dia >=20) e (dia <=29) entao
         escreval("SEU SIGNO � PEIXES")
      fimse
   caso 3
        se (dia >=1) e (dia<=20) entao
           escreval("SEU SIGNO � PEIXES")
        fimse
        se (dia >=21) e (dia<=30) entao
           escreval("SEU SIGNO � �RIES")
        fimse
   caso 4
        se (dia >=1) e (dia <=20) entao
           escreval("SEU SIGNO � �RIES")
        fimse
        se (dia >=21) e (dia <=30) entao
           escreval("SEU SIGNO � TOURO")
        fimse
   caso 5
        se (dia >=1) e (dia <=20) entao
           escreval("SEU SIGNO � TOURO")
        fimse
        se (dia >=21) e (dia <=30) entao
           escreval("SEU SIGNO � G�MEOS")
        fimse
   caso 6
        se (dia >=1) e (dia <=20) entao
           escreval("SEU SIGNO � G�MEOS")
        se (dia >=21) e (dia <=30) entao
           escreval("SEU SIGNO � C�NCER")
        fimse
   caso 7
        se (dia >=1) e (dia <=20) entao
           escreval("SEU SIGNO � C�NNCER")
        fimse
        se (dia >=21) e (dia<=30) entao
           escreval("SEU SIGNO � LE�O")
        fimse
   caso 8
        se (dia >=1) e (dia <=22) entao
           escreval("SEU SIGNO � LE�O")
        se (dia >=23) e (dia <=30) entao
           escreval("SEU SIGNO � VIRGEM")
        fimse
   caso 9
        se (dia >=1) e (dia <=22) entao
           escreval("SEU SIGNO � VIRGEM")
        fimse
        se (dia >=23) e (dia<=30) entao
           escreval("SEU SIGNO � LIBRA")
        fimse
   caso 10
        se (dia >=1) e (dia <=22) entao
           escreval("SEU SIGNO � ESCORPI�O")
        fimse
        se (dia >=23) e (dia <=30) entao
        


   caso 12
         se (dia >=22) e (dia <=31) entao
            escreval("SEU SIGNO � CAPRICORNIO")
         fimse

      fimescolha


Fimalgoritmo