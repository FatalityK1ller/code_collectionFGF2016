algoritmo "semnome"
// Função :
// Autor :
// Data : 09/06/2011
// Seção de Declarações 
var

   msg:caracter
   player,npc:inteiro

   
inicio
// Seção de Comandos 

//Perfumaria
escreval("--------- JOKENPO ---------------")
escreval("---------------------------------")
escreval("Bem vindo ao game Jokenpo!")
escreval
escreval("siga as instruções abaixo.")
escreval

//inicialização de variáveis
player <-1

enquanto player <> 0 faca

//Inicializa a mensagem
 msg <-"Sem ganhador"


//Player jogando
escreval("Escolha sua opção ( 1-Tesoura, 2-Papel, 3-Pedra )")
escreva("Para sair digite 0 (zero):")
leia(player)

            se player <> 0 entao
            
               //Npc jogando
               aleatorio on
               aleatorio 1,3
               escreval
               escreval("Computador jogando.....")
               leia(npc)

               aleatorio off

               //Verifica ganhador
               
                //Tesoura
               se player = 1 entao
                  se npc =2 entao

                     msg <-  "O Jogador ganhou!"

                  fimse
               fimse

               se npc=1 entao
                  se player=2 entao

                     msg <- "O computador ganhou!"

                  fimse
               fimse
               
               //Papel
               se player = 2 entao
                  se npc = 3 entao
                  
                     msg <- "O Jogador ganhou!"
                     
                  fimse
               fimse
               
               se npc=2 entao
                  se player=3 entao
                  
                     msg <- "O computador ganhou!"
                     
                  fimse
               fimse
               
                //Pedra
               se player = 3 entao
                  se npc = 1 entao

                     msg <- "O Jogador ganhou!"

                  fimse
               fimse

               se npc=3 entao
                  se player=1 entao

                     msg <- "O computador ganhou!"

                  fimse
               fimse
               escreval
               escreval("---------------------------------------")
               escreval(msg)
               escreval("---------------------------------------")
               escreval

            fimse
            
fimenquanto


fimalgoritmo
