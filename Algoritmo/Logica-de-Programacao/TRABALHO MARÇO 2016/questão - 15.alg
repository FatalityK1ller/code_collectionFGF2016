algoritmo "quest�o - 15"
// Disciplina   : [Algoritmo e L�gica de Programa��o]
// Professor    : Elidiane Martins
// Fun��o :
// Autor :
// Data : 01/04/2016
// Se��o de Declara��es
var
n,aux:inteiro
idade,sal,soma,media,qtd:inteiro
sexo,sexo1:caractere
inicio
// Se��o de Comandos

n<-0
aux<-0
soma<-0
media<-0
qtd<-0

para n de 1 ate 2 faca

   aux<-aux+n
   escreval("informe sua idade")
   leia(idade)
   se idade > 60 entao
      escreval("IDADE FORA DO ESPECIFICADO")
      interrompa

   fimse

   escreval("Informe seu gen�ro com M ou F")
   leia(sexo)
   se sexo = "f" entao
      media<-n
      sexo1<-"MULHERES"
      se (sexo = "f") e (sal <= 100) entao
         qtd<-n


         se sexo = "m" entao
            media<-n
            sexo1<-"HOMENS"


         senao
            se sexo <> "f" entao
               escreval("GEN�RO INV�LIDO")
               interrompa
               se sexo <> "m" entao
                  escreval("GEN�RO INV�LIDO")
                  interrompa

               fimse
            fimse
         fimse
      fimse
   fimse


   escreval("informe seu salario")
   leia(sal)
   soma<-soma+sal


   limpatela

fimpara




escreval("M�dia de salario dos pesquisados � de ",soma/2," Reais")
escreval(media," ",sexo1)
escreval(qtd)
// IMCOPLETO FALTANDO �LTIMO ITEM DA QUEST�O


fimalgoritmo
