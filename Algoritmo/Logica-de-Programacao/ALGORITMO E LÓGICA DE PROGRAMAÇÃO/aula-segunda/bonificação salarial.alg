algoritmo "BONIFICA��O SALARIAL"
// Fun��o :calcular diferentes percentuais para valores de salario especificos
// Autor :cleilson
// Data : 15/03/2016
// Se��o de Declara��es
var
salario,auxilio_escola,auxilio_escola2:real
inicio
// Se��o de Comandos
escreval("Valor do sal�rio ")
leia(salario)

auxilio_escola<-(salario+150.00) // AUXLIO ESCOLA PRIMEIRO CASO AT� 500,00 REAIS
auxilio_escola2<-(salario+100.00)// AUXILIO ESCOLA SEGUNDO CASO MAIS DE 600,00 REAIS

// SAL�RIO AT� R$ 500,00 - BONIFICA��O 5% DO SAL�RIO
// SAL�RIO ENTRE R$ 500,00 e R$ 1.200,00 - BONIFICA��O 12% DO SAL�RIO
// SAL�RIO ACIMA DE R$ 1.200,00 - SEM BONIFICA��O

// SAL�RIO AT� R$ 600,00 - AUX�LIO ESCOLA R$ 150,00
// SAL�RIO MAIS QUE R$ 600,00 - AUX�LIO R$ 100,00

se salario = 500.00 entao
   escrevaL("BONIFICA��O DE 5%")
   escreval(((salario*0.05)/100)+salario)

senao
   se salario <= 1200.00 entao
      escreval("BONIFICA��O DE 12%")
      escreval(((salario*0.12)/100)+salario)
   senao
      se salario > 1200.00 entao
         escreval("SEM BONIFICA��O")
      fimse
   fimse
fimse

se salario = 500.00 entao
escreval("Sal�rio com direito a mais 150 de auxilio escola, ficando em  ",auxilio_escola," Reais")
senao
se salario <= 600.00 entao
   escreval("Sal�rio com direito a mais 150 de auxilio escola, ficando em ",auxilio_escola," Reais")
senao
   se salario > 600 entao
      escreva("Sal�rio com direito a mais 100 de auxilio escola, ficando em ",auxilio_escola2," Reais")
   fimse
fimse
fimse





fimalgoritmo
