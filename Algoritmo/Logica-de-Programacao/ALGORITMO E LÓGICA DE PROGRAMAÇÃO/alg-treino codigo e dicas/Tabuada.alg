algoritmo "Tabuada"
// Função : Mostra a tabuada das operações
// Autor :  Jocieldo do Nascimento
// Data : 03/06/2013
// Email: jocieldo@live.com
var
      i,j: inteiro
      opcao:caractere
      
procedimento Soma()
inicio
     para i de 1 ate 10 faca
           escreval("---------TABUADA DE ",i,"--------")
           para j de 1 ate 10 faca
                 escreval(i," + ",j," = ",i+j)
           fimpara
      fimpara
fimprocedimento


procedimento Multiplicacao()
inicio
      para i de 1 ate 10 faca
           escreval("---------TABUADA DE ",i,"--------")
           para j de 1 ate 10 faca
                 escreval(i," x ",j," = ",i*j)
           fimpara
      fimpara
fimprocedimento


procedimento Divisao()
inicio
      para i de 1 ate 10 faca
           escreval("---------TABUADA DE ",i,"--------")
           para j de 1 ate 10 faca
                 escreval(i," / ",j," = ",i/j:2:2)
           fimpara
      fimpara
fimprocedimento


procedimento Subtracao()
inicio
      para i de 1 ate 10 faca
           escreval("---------TABUADA DE ",i,"--------")
           para j de 1 ate 10 faca
                 escreval(i," - ",j," = ",i-j)
           fimpara
      fimpara
fimprocedimento

inicio

      escreval("**********************************************************************************")
      escreval("*                                    TABUADA                                     *")
      escreval("**********************************************************************************")
      escreval()

      escreva("DIGITE A OPERAÇÃO A SER REALIZADA NA TABUADA [+-*/]: ")
      leia(opcao)
      
      escreval()
      
      escolha opcao
           caso "+"
               Soma()
           caso "*"
               Multiplicacao()
           caso "/"
               Divisao()
           caso "-"
               Subtracao()
           outrocaso
               escreval("Operação inválida!")
      fimescolha

fimalgoritmo
