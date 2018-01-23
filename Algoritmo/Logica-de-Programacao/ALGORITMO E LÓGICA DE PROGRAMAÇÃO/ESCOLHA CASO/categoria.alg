algoritmo "categoria idade"
// Função :escolha caso
// Autor :cleilson
// Data : 17/03/2016
// Seção de Declarações
var
idade:real
nome:caractere
inicio
// Seção de Comandos

escreval("Digite o nome ")
leia(nome)
escreval("Digite a idade ")
leia(idade)

escolha idade
caso 5 ate 10
   escreval("Categoria Infantil")
caso 11 ate 15
   escreval("Categoria Juvenil")
caso 16 ate 20
   escreval("Categoria Junior")
caso 21 ate 25
   escreval("Categoria Profissional")
   
outrocaso
         escreval("Categoria Inválida")
fimescolha


fimalgoritmo
