algoritmo "M�DIA"
// Fun��o :M�DIA DE 4 NOTAS
// Autor :cleilson
// Data : 20/02/2016
// Se��o de Declara��es 
var
N1,N2,N3,N4,MEDIA,MN1,MN2,MAIOR_NOTA:real
inicio
// Se��o de Comandos
escreva("nota 1 - :")
    leia(N1)
    
escreva("nota 2 - :")
    leia(N2)
    
escreva("nota 3 - :")
    leia(N3)
    
escreva("nota 4 - :")
    leia(N4)
    
     MEDIA<-(N1+N2+N3+N4)/4
          escreval("A m�dia do aluno �",MEDIA)
          
                 se MEDIA >= 5 ENTAO
                       escreval("aprovado")
                 senao
                       escreval("reprovado")
           fimse
    
                           se N1 > N2 ENTAO
                                  MN1<-(N1)
                           senao
                                  MN1<-(N2)

                     fimse
                
                                    se N3 > N4 ENTAO
                                           MN2<-(N3)
                                   senao
                                           MN2<-(N4)
                
                     fimse
                
                                              se MN1 > MN2 ENTAO
                                                MAIOR_NOTA<-(MN1)
                                          senao
                                                MAIOR_NOTA<-(MN2)
                                                
                              escreva("maior nota � ",MAIOR_NOTA)
                  
                  fimse
                
fimalgoritmo
