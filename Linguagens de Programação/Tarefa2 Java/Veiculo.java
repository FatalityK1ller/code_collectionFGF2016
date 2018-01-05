
public class Veiculo{
	
	private String marca;
	private int ano;
	private String placa;
	private String cor;
	private Proprietario dono;
	
	public Veiculo(){
		this.marca = "INDEFINIDO";
		this.ano = 0;
		this.placa = "INDEFINIDO";
		this.cor = "INDEFINIDO";
		
	}
	
	
	public Proprietario getDono() {
		return dono;
	}


	public void setDono(Proprietario dono) {
		this.dono = dono;
	}


	@Override
	public String toString() {
		return "Veiculo [marca=" + marca + ", ano=" + ano + ", placa=" + placa + ", cor=" + cor + "]";
	}


	public Veiculo(String marca, int ano, String placa, String cor) {
		super();
		this.marca = marca;
		this.ano = ano;
		this.placa = placa;
		this.cor = cor;
	}
	
	public Veiculo(String marca, int ano, String placa, String cor,Proprietario dono) {
		
		super();
		this.marca = marca;
		this.ano = ano;
		this.placa = placa;
		this.cor = cor;
		this.dono = dono;
	}


	public String getMarca() {
		return marca;
	}

	public void setMarca(String marca) {
		this.marca = marca;
	}

	public int getAno() {
		return ano;
	}

	public void setAno(int ano) {
		this.ano = ano;
	}

	public String getPlaca() {
		return placa;
	}

	public void setPlaca(String placa) {
		this.placa = placa;
	}

	public String getCor() {
		return cor;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}
	
	

}
