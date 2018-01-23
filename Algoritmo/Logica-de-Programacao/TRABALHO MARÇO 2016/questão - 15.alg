algoritmo "questão - 15"
// Disciplina   : [Algoritmo e Lógica de Programação]
// Professor    : Elidiane Martins
// Função :
// Autor :
// Data : 01/04/2016
// Seção de Declarações
var
n,aux:inteiro
idade,sal,soma,media,qtd:inteiro
sexo,sexo1:caractere
inicio
// Seção de Comandos

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

   escreval("Informe seu genêro com M ou F")
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
               escreval("GENÊRO INVÁLIDO")
               interrompa
               se sexo <> "m" entao
                  escreval("GENÊRO INVÁLIDO")
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




escreval("Média de salario dos pesquisados é de ",soma/2," Reais")
escreval(media," ",sexo1)
escreval(qtd)
// IMCOPLETO FALTANDO ÚLTIMO ITEM DA QUESTÃO


fimalgoritmo
