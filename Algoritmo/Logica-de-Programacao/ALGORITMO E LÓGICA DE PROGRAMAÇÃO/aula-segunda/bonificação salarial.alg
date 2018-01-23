algoritmo "BONIFICAÇÃO SALARIAL"
// Função :calcular diferentes percentuais para valores de salario especificos
// Autor :cleilson
// Data : 15/03/2016
// Seção de Declarações
var
salario,auxilio_escola,auxilio_escola2:real
inicio
// Seção de Comandos
escreval("Valor do salário ")
leia(salario)

auxilio_escola<-(salario+150.00) // AUXLIO ESCOLA PRIMEIRO CASO ATÉ 500,00 REAIS
auxilio_escola2<-(salario+100.00)// AUXILIO ESCOLA SEGUNDO CASO MAIS DE 600,00 REAIS

// SALÁRIO ATÉ R$ 500,00 - BONIFICAÇÃO 5% DO SALÁRIO
// SALÁRIO ENTRE R$ 500,00 e R$ 1.200,00 - BONIFICAÇÃO 12% DO SALÁRIO
// SALÁRIO ACIMA DE R$ 1.200,00 - SEM BONIFICAÇÃO

// SALÁRIO ATÉ R$ 600,00 - AUXÍLIO ESCOLA R$ 150,00
// SALÁRIO MAIS QUE R$ 600,00 - AUXÍLIO R$ 100,00

se salario = 500.00 entao
   escrevaL("BONIFICAÇÃO DE 5%")
   escreval(((salario*0.05)/100)+salario)

senao
   se salario <= 1200.00 entao
      escreval("BONIFICAÇÃO DE 12%")
      escreval(((salario*0.12)/100)+salario)
   senao
      se salario > 1200.00 entao
         escreval("SEM BONIFICAÇÃO")
      fimse
   fimse
fimse

se salario = 500.00 entao
escreval("Salário com direito a mais 150 de auxilio escola, ficando em  ",auxilio_escola," Reais")
senao
se salario <= 600.00 entao
   escreval("Salário com direito a mais 150 de auxilio escola, ficando em ",auxilio_escola," Reais")
senao
   se salario > 600 entao
      escreva("Salário com direito a mais 100 de auxilio escola, ficando em ",auxilio_escola2," Reais")
   fimse
fimse
fimse





fimalgoritmo
