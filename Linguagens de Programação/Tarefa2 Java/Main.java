
public class Main {

	private static Proprietario p1;

	public static void main(String[] args) {
		Veiculo p = new Veiculo();
		
		p1 = new Proprietario("João da Silva");
		
		Veiculo v = new Veiculo("FIAT",2010,"UHF1265","AZUL");
		
		System.out.println("Dados do veiculo : " + "Marca : " + v.getMarca()
												 + " Ano : " + v.getAno() +
												" Placa : " + v.getPlaca() + 
												" Cor : " + v.getCor()
												+ "Dono : "+p.getDono());
		
		
		
		

	}

}
