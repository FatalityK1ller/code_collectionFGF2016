algoritmo "JogoDaVelhaIA"
// Função :
// Autor :
// Data : 09/03/2013

// Seção de Declarações 
var
   numeroDeJogadas : inteiro
   jogadaValorTemp : inteiro
   jogadaValor : inteiro
   jogadorAtual : inteiro
   outroJogador : inteiro
   contador : inteiro
   jogadasValidas : inteiro
   jogadaValorRetorno : inteiro
   _jogadaInvalida : inteiro
   rodada: caractere
   alguemGanhou,turno : logico
   posicaoX,posicaoO, pontuacaoX, pontuacaoO, pontuacaoEmpate, contadorColuna, contadorLinha, opcao : inteiro
   tabuleiro:vetor[1..9] de inteiro
   ListaJogadasValidas:vetor[1..10] de inteiro
   jogadorX, jogadorO, resultado, ganhador, criaLinha : caractere
	posicaoVetor:vetor[1..3,1..3] de caractere
	listras:vetor[1..8,1..6] de caractere
   

funcao RetornaJogadaMaquina(jogadorEmQuestao : inteiro) : inteiro
var
   valorAtual : inteiro
inicio

      valorAtual <- jogadorEmQuestao
      jogadaValorRetorno <- 0
      
      //se jogadorEmQuestao <> jogadorAtual entao
       //  valorAtual <- valorAtual * (-1)
      //fimSe

      se (tabuleiro[7] + tabuleiro[8] + tabuleiro[9]) = (2 * valorAtual) entao
         se tabuleiro[7] = 0 entao
            jogadaValorRetorno <- 7
         senao
              se tabuleiro[8] = 0 entao
                 jogadaValorRetorno <- 8
              senao
                   jogadaValorRetorno <- 9
              fimSe
         fimSe
      fimSe

      se (tabuleiro[4] + tabuleiro[5] + tabuleiro[6]) = (2 * valorAtual) entao
         se tabuleiro[4] = 0 entao
            jogadaValorRetorno <- 4
         senao
              se tabuleiro[5] = 0 entao
                 jogadaValorRetorno <- 5
              senao
                   jogadaValorRetorno <- 6
              fimSe
         fimSe
      fimSe

      se (tabuleiro[1] + tabuleiro[2] + tabuleiro[3]) = (2 * valorAtual) entao
         se tabuleiro[1] = 0 entao
            jogadaValorRetorno <- 1
         senao
              se tabuleiro[2] = 0 entao
                 jogadaValorRetorno <- 2
              senao
                   jogadaValorRetorno <- 3
              fimSe
         fimSe
      fimSe

      se (tabuleiro[7] + tabuleiro[4] + tabuleiro[1]) = (2 * valorAtual) entao
         se tabuleiro[7] = 0 entao
            jogadaValorRetorno <- 7
         senao
              se tabuleiro[4] = 0 entao
                 jogadaValorRetorno <- 4
              senao
                   jogadaValorRetorno <- 1
              fimSe
         fimSe
      fimSe

      se (tabuleiro[8] + tabuleiro[5] + tabuleiro[2]) = (2 * valorAtual) entao
         se tabuleiro[8] = 0 entao
            jogadaValorRetorno <- 8
         senao
              se tabuleiro[5] = 0 entao
                 jogadaValorRetorno <- 5
              senao
                   jogadaValorRetorno <- 2
              fimSe
         fimSe
      fimSe

      se (tabuleiro[9] + tabuleiro[6] + tabuleiro[3]) = (2 * valorAtual) entao
         se tabuleiro[9] = 0 entao
            jogadaValorRetorno <- 9
         senao
              se tabuleiro[6] = 0 entao
                 jogadaValorRetorno <- 6
              senao
                   jogadaValorRetorno <- 3
              fimSe
         fimSe
      fimSe

      se (tabuleiro[7] + tabuleiro[5] + tabuleiro[3]) = (2 * valorAtual) entao
         se tabuleiro[7] = 0 entao
            retorne 7
         senao
              se tabuleiro[5] = 0 entao
                 jogadaValorRetorno <- 5
              senao
                   jogadaValorRetorno <- 3
              fimSe
         fimSe
      fimSe

      se (tabuleiro[9] + tabuleiro[5] + tabuleiro[1]) = (2 * valorAtual) entao
         se tabuleiro[9] = 0 entao
            jogadaValorRetorno <- 9
         senao
              se tabuleiro[5] = 0 entao
                 jogadaValorRetorno <- 5
              senao
                   jogadaValorRetorno <- 1
              fimSe
         fimSe
      fimSe
      
      se jogadaValorRetorno <> 0 entao
         retorne jogadaValorRetorno
      senao
         retorne _jogadaInvalida
      fimSe
      
fimfuncao

//Decide a melhor jogada para a máquina
funcao JogadaDaMaquina() : inteiro
inicio

      jogadaValor <- 0
      //Se não existir mais jogadas retorna invalido
      se numeroDeJogadas = 9 entao
         jogadaValor <- -1
         retorne jogadaValor
      fimSe
      
      //Se ouver alguma jogada que possa te fazer ganhar, jogue!
      jogadaValorTemp <- RetornaJogadaMaquina(jogadorAtual)
      se jogadaValorTemp <> _jogadaInvalida entao
         jogadaValor <- jogadaValorTemp
         //retorne jogadaValor
      fimSe
      
      //Caso exita alguma jogada que não te faça perder, jogue!
      outroJogador <- RetornaOutroJogador(jogadorAtual)
      jogadaValorTemp <- RetornaJogadaMaquina(outroJogador)
      se (jogadaValorTemp <> _jogadaInvalida) e (jogadaValor = 0) entao
         jogadaValor <- jogadaValorTemp
         retorne jogadaValor
      fimSe

      //Tenta prevenir a vitoria do adversário (procura montar duas vitorias ao mesmo tempo)
      se (numeroDeJogadas = 3) e (jogadaValor = 0) entao
         se ((tabuleiro[1] * tabuleiro[9]) = 1) ou ((tabuleiro[3] * tabuleiro[7]) = 1) e (tabuleiro[5] <> 0)
            jogadaValor <- 1
            retorne jogadaValor
         fimSe
         
         se ((tabuleiro[2] * tabuleiro[9]) = 1) ou ((tabuleiro[1] * tabuleiro[6]) = 1) ou ((tabuleiro[2] * tabuleiro[6]) = 1) e (tabuleiro[5] <> 0)
            jogadaValor <- 2
            retorne jogadaValor
         fimSe
      fimSe
         
         //Tenta jogar no meio ou nas diagonais, maior chance de vitoria
      se (numeroDeJogadas <= 2) e (jogadaValor = 0) entao
         se tabuleiro[5] = 0 entao
            jogadaValor <- 5
         senao
            se tabuleiro[1] = 0 entao
               jogadaValor <- 1
            senao
               jogadaValor <- 8
            fimSe
         fimSe
      senao
           se jogadaValor = 0 entao
              jogadaValor <- _jogadaInvalida
              se tabuleiro[5] = 0 entao
                 jogadaValor <- 5
              senao
                 se tabuleiro[7] = 0 entao
                    jogadaValor <- 7
                 senao
                      se tabuleiro[9] = 0 entao
                         jogadaValor <- 9
                      senao
                           se tabuleiro[1] = 0 entao
                              jogadaValor <- 1
                           senao
                              se tabuleiro[3] = 0 entao
                                 jogadaValor <- 3
                              fimSe
                           fimSe
                      fimSe
                 fimSe
              fimSe
              se jogadaValor <> _jogadaInvalida entao
                 retorne jogadaValor
              fimSe
           fimSe
      fimSe
      
      PupulaListaDeJogadasValidas()
      jogadasValidas <- ListaJogadasValidas[1]
      
      //Se apenas restar uma jogada, jogue a primeira
      se (jogadasValidas = 1) entao
         jogadaValor <- ListaJogadasValidas[2]
         retorne jogadaValor
      fimSe
      
      //Se Nenhuma das regras não forem  atendidas, jogue a primeira jogada
      se jogadaValor <> 0 entao
         retorne jogadaValor
      senao
         jogadasValidas <- ListaJogadasValidas[2]
         retorne jogadasValidas
      fimSe
      
fimfuncao


//Popula o array "jogadasValdas" com uma lista de jogadas válidas
procedimento PupulaListaDeJogadasValidas
inicio

      //limpa variável
      para contador de 1 ate 10 faca
           ListaJogadasValidas[contador] <- 0
      fimPara

      //Preenche a variável
      ListaJogadasValidas[1] <- 0
      para contador de 1 ate 9 faca
           se tabuleiro[contador] = 0 entao
              ListaJogadasValidas[1] <- ListaJogadasValidas[1] + 1
              ListaJogadasValidas[ListaJogadasValidas[1] + 1] <- contador
           fimSe
      fimPara
      
fimProcedimento


//Retorna o valor do outro jogador
funcao RetornaOutroJogador(jogador:inteiro) : inteiro
inicio
      se jogador = -1 entao
         retorne 1
      senao
           retorne -1
      fimSe
fimfuncao

//Cabeçalho do jogo
procedimento  Cabecalho
   inicio
 	escreval("**********************************************************************************")
	escreval("*			      JOGO DA VELHA 3.0                                  *")
	escreval("**********************************************************************************")
	escreval("")
	escreval("")
fimprocedimento

//limpa o array do jogo
procedimento limparVariaveis
	inicio
	posicaoVetor[1,1] <- " "
	posicaoVetor[1,2] <- " "
	posicaoVetor[1,3] <- " "
	posicaoVetor[2,1] <- " "
	posicaoVetor[2,2] <- " "
	posicaoVetor[2,3] <- " "
	posicaoVetor[3,1] <- " "
	posicaoVetor[3,2] <- " "
	posicaoVetor[3,3] <- " "
	
	para contador de 1 ate 9 faca
	     tabuleiro[contador] <- 0
	fimPara
fimprocedimento

//Exibe o tabuleiro do jogo na tela
procedimento ExibirTabuleiro
   inicio
	escreval(" ",listras[7,1]," ",listras[4,1],"    |    ",listras[5,1],"    |   ",listras[6,1]," ",listras[8,1]," ")
	escreval(" ",listras[1,1]," ",posicaoVetor[1,1]," ",listras[1,2],"  | ",listras[1,3],"  ",posicaoVetor[1,2],"  ",listras[1,4]," | ",listras[1,5]," ",posicaoVetor[1,3]," ",listras[1,6]," ")
	escreval("   ",listras[4,2],"  ",listras[7,2]," |    ",listras[5,2],"    | ",listras[8,2]," ",listras[6,2],"   ")
	escreval("--------+---------+-------")
	escreval("   ",listras[4,3],"    | ",listras[7,3],"  ",listras[5,3],"  ",listras[8,3]," |   ",listras[6,3],"   ")
	escreval(" ",listras[2,1]," ",posicaoVetor[2,1]," ",listras[2,2],"  | ",listras[2,3],"  ",posicaoVetor[2,2],"  ",listras[2,4]," | ",listras[2,5]," ",posicaoVetor[2,3]," ",listras[2,6]," ")
	escreval("   ",listras[4,4],"    | ",listras[8,4],"  ",listras[5,4],"  ",listras[7,4]," |   ",listras[6,4],"   ")
	escreval("--------+---------+-------")
	escreval("   ",listras[4,5],"  ",listras[8,5]," |    ",listras[5,5],"    | ",listras[7,5]," ",listras[6,5],"   ")
	escreval(" ",listras[3,1]," ",posicaoVetor[3,1]," ",listras[3,2],"  | ",listras[3,3],"  ",posicaoVetor[3,2],"  ",listras[3,4]," | ",listras[3,5]," ",posicaoVetor[3,3]," ",listras[3,6]," ")
	escreval(" ",listras[8,6]," ",listras[4,6],"    |    ",listras[5,6],"    |   ",listras[6,6]," ",listras[7,6]," ")
	escreval("")
	escreval("")

fimprocedimento

//Cria uma linha setando a coluna ou linha ganhadora
funcao CriaLinhaGanhador(char:caractere;linha:inteiro) : caractere
inicio
	
	se linha = 0 entao
		para contadorColuna de 1 ate 8 faca
			para contadorLinha de 1 ate 6 faca
				listras[contadorColuna,contadorLinha] <- " "
			fimPara
		fimPara
	senao
		para contadorLinha de 1 ate 6 faca
			listras[linha,contadorLinha] <- char
		fimPara
	fimSe

fimfuncao

//Verifica se ouve algum ganhador.
procedimento VerificaGanhador
   inicio
		se  (posicaoVetor[1,1] = "X") e (posicaoVetor[1,2] = "X") e (posicaoVetor[1,3] = "X") entao
		ganhador <- jogadorX
		pontuacaoX <- pontuacaoX + 1
		criaLinha <- CriaLinhaGanhador("°",1)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[1,1] = "X") e (posicaoVetor[2,2] = "X") e (posicaoVetor[3,3] = "X") entao
		ganhador <- jogadorX
		pontuacaoX <- pontuacaoX + 1
		criaLinha <- CriaLinhaGanhador("°",7)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[1,1] = "X") e (posicaoVetor[2,1] = "X") e (posicaoVetor[3,1] = "X") entao
		ganhador <- jogadorX
		pontuacaoX <- pontuacaoX + 1
		criaLinha <- CriaLinhaGanhador("°",4)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[1,2] = "X") e (posicaoVetor[2,2] = "X") e (posicaoVetor[3,2] = "X") entao
		ganhador <- jogadorX
		pontuacaoX <- pontuacaoX + 1
		criaLinha <- CriaLinhaGanhador("°",5)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[2,1] = "X") e (posicaoVetor[2,2] = "X") e (posicaoVetor[2,3] = "X") entao
		ganhador <- jogadorX
		pontuacaoX <- pontuacaoX + 1
		criaLinha <- CriaLinhaGanhador("°",2)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[3,1] = "X") e (posicaoVetor[3,2] = "X") e (posicaoVetor[3,3] = "X") entao
		ganhador <- jogadorX
		pontuacaoX <- pontuacaoX + 1
		criaLinha <- CriaLinhaGanhador("°",3)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[3,1] = "X") e (posicaoVetor[2,2] = "X") e (posicaoVetor[1,3] = "X") entao
		ganhador <- jogadorX
		pontuacaoX <- pontuacaoX + 1
		criaLinha <- CriaLinhaGanhador("°",8)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[1,3] = "X") e (posicaoVetor[2,3] = "X") e (posicaoVetor[3,3] = "X") entao
		ganhador <- jogadorX
		pontuacaoX <- pontuacaoX + 1
		criaLinha <- CriaLinhaGanhador("°",6)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[1,1] = "O") e (posicaoVetor[1,2] = "O") e (posicaoVetor[1,3] = "O") entao
		ganhador <- jogadorO
		pontuacaoO <- pontuacaoO + 1
		criaLinha <- CriaLinhaGanhador("°",1)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[1,1] = "O") e (posicaoVetor[2,2] = "O") e (posicaoVetor[3,3] = "O") entao
		ganhador <- jogadorO
		pontuacaoO <- pontuacaoO + 1
		criaLinha <- CriaLinhaGanhador("°",7)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[1,1] = "O") e (posicaoVetor[2,1] = "O") e (posicaoVetor[3,1] = "O") entao
		ganhador <- jogadorO
		pontuacaoO <- pontuacaoO + 1
		criaLinha <- CriaLinhaGanhador("°",4)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[1,2] = "O") e (posicaoVetor[2,2] = "O") e (posicaoVetor[3,2] = "O") entao
		ganhador <- jogadorO
		pontuacaoO <- pontuacaoO + 1
		criaLinha <- CriaLinhaGanhador("°",5)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[2,1] = "O") e (posicaoVetor[2,2] = "O") e (posicaoVetor[2,3] = "O") entao
		ganhador <- jogadorO
		pontuacaoO <- pontuacaoO + 1
		criaLinha <- CriaLinhaGanhador("°",2)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[3,1] = "O") e (posicaoVetor[3,2] = "O") e (posicaoVetor[3,3] = "O") entao
		ganhador <- jogadorO
		pontuacaoO <- pontuacaoO + 1
		criaLinha <- CriaLinhaGanhador("°",3)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[3,1] = "O") e (posicaoVetor[2,2] = "O") e (posicaoVetor[1,3] = "O") entao
		ganhador <- jogadorO
		pontuacaoO <- pontuacaoO + 1
		criaLinha <- CriaLinhaGanhador("°",8)
		alguemGanhou <- verdadeiro
		senao
		se  (posicaoVetor[1,3] = "O") e (posicaoVetor[2,3] = "O") e (posicaoVetor[3,3] = "O") entao
		ganhador <- jogadorO
		pontuacaoO <- pontuacaoO + 1
		criaLinha <- CriaLinhaGanhador("°",6)
		alguemGanhou <- verdadeiro
		senao
		se (posicaoVetor[1,1] <> " ") e (posicaoVetor[1,2] <> " ") e (posicaoVetor[1,3] <> " ") e (posicaoVetor[2,1] <> " ") e (posicaoVetor[2,2] <> " ") e (posicaoVetor[2,3] <> " ")e (posicaoVetor[3,1] <> " ") e (posicaoVetor[3,2] <> " ") e (posicaoVetor[3,3] <> " ") entao
		 ganhador <- "Empate"
		 pontuacaoEmpate <- pontuacaoEmpate + 1
		 alguemGanhou <- verdadeiro
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
		fimSe
fimprocedimento


//Apresenta mensagem de Parabens ou empate.
procedimento Parabens
    inicio
    Cabecalho()
	ExibirTabuleiro()
	
    se ganhador <> "Empate" entao

       escreval("                             PARABENS ",maiusc(ganhador))
       escreval("                            Você foi o vencedor!!")
       escreval("")
       escreval("")
       escreval("")

       escreval("Precione ENTER para uma nova rodada: ")

       leia(rodada)
	
	  alguemGanhou <- falso
	  limparVariaveis()

    senao
       escreval("                                 OPS!!!!!")
       escreval("                               Deu Velha!")
       escreval("")
       escreval("")
       escreval("")

       escreval("Precione ENTER para uma nova rodada: ")
       leia(rodada)

	  alguemGanhou <- falso
	  limparVariaveis()


    fimSe

fimprocedimento

//Marca na variável do tabuleiro a letra do jogador
funcao MarcarPosicao(posicaoPeca:inteiro;tipoDeCaractere:caractere) : caractere
	inicio
	
	se posicaoPeca > 9 entao
		retorne "invalido"
	fimSe
	
	escolha posicaoPeca
		caso 7
			se posicaoVetor[1,1] = " " entao
				posicaoVetor[1,1] <- tipoDeCaractere
				tabuleiro[7] <- jogadorAtual
				retorne "ok"
			senao
				retorne "ocupado"
			fimSe
		caso 8
			se posicaoVetor[1,2] = " "  entao
				posicaoVetor[1,2] <- tipoDeCaractere
				tabuleiro[8] <- jogadorAtual
				retorne "ok"
			senao
				retorne "ocupado"
			fimSe
		caso 9
			se posicaoVetor[1,3] = " " entao
				posicaoVetor[1,3] <- tipoDeCaractere
				tabuleiro[9] <- jogadorAtual
				retorne "ok"
			senao
				retorne "ocupado"
			fimSe
		caso 4
			se posicaoVetor[2,1] = " " entao
				posicaoVetor[2,1] <- tipoDeCaractere
				tabuleiro[4] <- jogadorAtual
				retorne "ok"
			senao
				retorne "ocupado"
			fimSe
		caso 5
			se posicaoVetor[2,2] = " " entao
				posicaoVetor[2,2] <- tipoDeCaractere
				tabuleiro[5] <- jogadorAtual
				retorne "ok"
			senao
				retorne "ocupado"
			fimSe
		caso 6
			se posicaoVetor[2,3] = " " entao
				posicaoVetor[2,3] <- tipoDeCaractere
				tabuleiro[6] <- jogadorAtual
				retorne "ok"
			senao
				retorne "ocupado"
			fimSe
		caso 1
			se posicaoVetor[3,1] = " " entao
				posicaoVetor[3,1] <- tipoDeCaractere
				tabuleiro[1] <- jogadorAtual
				retorne "ok"
			senao
				retorne "ocupado"
			fimSe
		caso 2
			se posicaoVetor[3,2] = " " entao
				posicaoVetor[3,2] <- tipoDeCaractere
				tabuleiro[2] <- jogadorAtual
				 retorne "ok"
			senao
				retorne "ocupado"
			fimSe
		caso 3
			se posicaoVetor[3,3] = " " entao
				posicaoVetor[3,3] <- tipoDeCaractere
				tabuleiro[3] <- jogadorAtual
				retorne "ok"
			senao
				retorne "ocupado"
			fimSe
	fimescolha

fimfuncao

//Exibe as pontuações dos jogadores
procedimento ExibirPontuacaoJogadores
inicio
      escreval("  Pontuação:")
      escreval("       ",jogadorX,": ",pontuacaoX)
      escreval("       ",jogadorO,": ",pontuacaoO)
      escreval("       Empate: ",pontuacaoEmpate)
      escreval("")
fimprocedimento


inicio

   _jogadaInvalida <- -1
   Cabecalho()
	
	escreval("Selecione um Jogo:")
	escreval("")
	escreval("1 - Um Jogador")
	escreval("2 - Dois Jogadores")
	escreval("3 - Sair")
	escreval("")
	escreva("Opção desejada: ")
	leia(opcao)
	
	limpatela
	Cabecalho()
	
	//Etapa para obter as informações dos jogadores
	se opcao = 1 entao
	   escreva("Digite o nome do jogador(X): ")
   	leia(jogadorX)
   	jogadorO <- "Maquina"
	fimSe
	
	se opcao = 2 entao
   	escreva("Digite o nome do primeiro jogador(X): ")
   	leia(jogadorX)
   	escreva("Digite o nome do segundo jogador(O): ")
   	leia(jogadorO)
	fimSe
	
	se opcao = 3 entao
	   fimalgoritmo
	fimSe
	//limpa a tela do jogo
	limpatela
	limparVariaveis()
	
	alguemGanhou <- falso
	jogadorAtual <- -1
	turno <- verdadeiro
	resultado <- ""
	pontuacaoO <- 0
	pontuacaoX <- 0
	criaLinha <- CriaLinhaGanhador(" ",0)
	
	//laço para a repetição para o display do jogo
	enquanto alguemGanhou = falso faca
	   numeroDeJogadas <- numeroDeJogadas + 1
	   limpatela
	   criaLinha <- CriaLinhaGanhador(" ",0)
		Cabecalho()
		ExibirTabuleiro()
		ExibirPontuacaoJogadores()
		
		se (jogadorAtual = -1) entao
			escreval("Agora é sua vez ",maiusc(jogadorX))
			escreva("Digite um número de 1 a 9 de acordo com as casas: ")
			leia(posicaoX)
			resultado <- MarcarPosicao(posicaoX,"X")
			//tabuleiro[posicaoX] <- -1
			se resultado = "ocupado" entao
			    escreval("A posição já esta ocupada, escolha outa.")
			senao
			    jogadorAtual <- 1
			fimSe
			resultado <- ""
			ganhador <- ""
		senao
   			se opcao = 1 entao
               escreval("Agora é sua vez ",maiusc(jogadorO))
      			//escreva("Digite um número de 1 a 9 de acordo com as casas: ")
               //leia(posicaoO)
               posicaoO <- JogadaDaMaquina()
      			resultado <- MarcarPosicao(posicaoO,"O")
      			//tabuleiro[posicaoO] <- 1
   			senao
   			   escreval("Agora é sua vez ",maiusc(jogadorO))
      			escreva("Digite um número de 1 a 9 de acordo com as casas: ")
               leia(posicaoO)
      			resultado <- MarcarPosicao(posicaoO,"O")
   			fimSe
   			se resultado = "ocupado" entao
   			    escreval("A posição já esta ocupada, escolha outa.")
   			senao
   			    jogadorAtual <- -1
   			fimSe
   			resultado <- ""
   			ganhador <- ""
		fimSe
		
      limpatela
      VerificaGanhador()

      se alguemGanhou = verdadeiro entao
         Parabens()
      fimSe

	fimenquanto

      
fimalgoritmo
