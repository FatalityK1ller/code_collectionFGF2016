algoritmo "semnome"
// Função :
// Autor :
// Data : 29/02/2016
// Seção de Declarações
var
n1,n2,n3,maior:inteiro
inicio
// Seção de Comandos

escreval("primeiro número recebido ")
leia (n1)

escreval("segundo número recebido ")
leia(n2)

escreval("terceiro número recebido ")
leia(n3)

se (n1 > n2) E (n1 > n3) entao
   maior<-n1
      escreva("a sequencia",maior)
   se (n2 > n1) E (n2 > n3) entao
      maior<-n2
      escreva(maior,n1,n3)
      se (n3 > n1) E (n3 > n2)  entao
         maior<-n3
         escreva(maior,n1,n3)
      fimse
   fimse
fimse

fimalgoritmo
