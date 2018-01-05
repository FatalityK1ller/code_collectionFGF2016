
public class Proprietario {
	private String nome;
	
	public Proprietario(String nome){
		super();
		this.nome = nome;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	@Override
	public String toString() {
		return "Proprietario [nome=" + nome + "]";
	}

}
