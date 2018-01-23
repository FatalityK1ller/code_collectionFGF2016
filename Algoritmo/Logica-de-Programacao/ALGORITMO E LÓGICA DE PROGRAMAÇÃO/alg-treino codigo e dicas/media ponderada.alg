algoritmo "media ponderada"
// Função :
// Autor :
// Data : 22/02/2016
// Seção de Declarações 
var
nota1,nota2,nota3,peso1,peso2,peso3,media:real
inicio
// Seção de Comandos

escreval("nota 1")
      leia(nota1)
      
escreval("nota 2")
      leia(nota2)
      
escreval("nota 3")
      leia(nota3)
      
      peso1<-2
      peso2<-3
      peso3<-5
      media<-(nota1*peso1)+(nota2*peso2)+(nota3*peso3)/peso1+peso2+peso3
                    escreva("A média ponderada é",media)
      
fimalgoritmo
