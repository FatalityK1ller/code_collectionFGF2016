algoritmo "MÉDIA"
// Função :Calcular a média e informar aprovado, reprovado ou recuperação
// Autor :cleilson
// Data : 29/02/2016
// Seção de Declarações
var
n1,n2,n3,media:real
inicio
// Seção de Comandos

escreval("NOTA 1 ")
leia(n1)

escreval("NOTA 2 ")
leia(n2)

escreval("NOTA 3 ")
leia(n3)

media<-(n1+n2+n3)/3


se media >=7 entao
   escreval("A média do aluno é ",media)
   escreval("APROVADO")
fimse
se media <=5 entao
   escreval("A méda do aluno é ",media)
   escreval("REPROVADO")
fimse
se (media >=5.1) E (media<=6.9) entao
   escreval("A média do aluno é ",media)
   escreval("RECUPERAÇÃO")
fimse




fimalgoritmo
