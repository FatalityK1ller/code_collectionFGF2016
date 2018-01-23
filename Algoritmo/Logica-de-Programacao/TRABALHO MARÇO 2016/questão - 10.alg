Algoritmo "semnome"
// Disciplina   : [Algoritmo e Lógica de Programação]
// Professor    : Elidiane Martins
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 01/04/2016
Var
   // Seção de Declarações das variáveis
   dia,mes:inteiro
   data_nas:inteiro


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreval("Informe o dia de seu nascimento")
   leia(dia)

   escreval("1 - JANEIRO")
   escreval("2 - FEVEREIRO")
   escreval("3 - MARÇO")
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
         escreval("SEU SIGNO É CAPRICORNIO")
      fimse
      se (dia >=21) e (dia<=30) entao
            escreval("SEU SIGNO É AQUARIO")
         fimse
   caso 2
      se  (dia >=1) e (dia <=19) entao
          escreval("SEU SIGNO É AQUARIO")
      fimse
      se (dia >=20) e (dia <=29) entao
         escreval("SEU SIGNO É PEIXES")
      fimse
   caso 3
        se (dia >=1) e (dia<=20) entao
           escreval("SEU SIGNO É PEIXES")
        fimse
        se (dia >=21) e (dia<=30) entao
           escreval("SEU SIGNO É ÁRIES")
        fimse
   caso 4
        se (dia >=1) e (dia <=20) entao
           escreval("SEU SIGNO É ÁRIES")
        fimse
        se (dia >=21) e (dia <=30) entao
           escreval("SEU SIGNO É TOURO")
        fimse
   caso 5
        se (dia >=1) e (dia <=20) entao
           escreval("SEU SIGNO É TOURO")
        fimse
        se (dia >=21) e (dia <=30) entao
           escreval("SEU SIGNO É GÊMEOS")
        fimse
   caso 6
        se (dia >=1) e (dia <=20) entao
           escreval("SEU SIGNO É GÊMEOS")
        se (dia >=21) e (dia <=30) entao
           escreval("SEU SIGNO É CÂNCER")
        fimse
   caso 7
        se (dia >=1) e (dia <=20) entao
           escreval("SEU SIGNO É CÂNNCER")
        fimse
        se (dia >=21) e (dia<=30) entao
           escreval("SEU SIGNO É LEÃO")
        fimse
   caso 8
        se (dia >=1) e (dia <=22) entao
           escreval("SEU SIGNO É LEÃO")
        se (dia >=23) e (dia <=30) entao
           escreval("SEU SIGNO É VIRGEM")
        fimse
   caso 9
        se (dia >=1) e (dia <=22) entao
           escreval("SEU SIGNO É VIRGEM")
        fimse
        se (dia >=23) e (dia<=30) entao
           escreval("SEU SIGNO É LIBRA")
        fimse
   caso 10
        se (dia >=1) e (dia <=22) entao
           escreval("SEU SIGNO É ESCORPIÃO")
        fimse
        se (dia >=23) e (dia <=30) entao
        


   caso 12
         se (dia >=22) e (dia <=31) entao
            escreval("SEU SIGNO É CAPRICORNIO")
         fimse

      fimescolha


Fimalgoritmo