package entidade;

public class Produto {
	
	private int codigo;
	private String descricao;
	private float valor;
	private int quantidadeEstoque;
	
	public Produto(int codigo, String descricao, float valor, int quantidadeEstoque) {
		super();
		this.codigo = codigo;
		this.descricao = descricao;
		this.valor = valor;
		this.quantidadeEstoque = quantidadeEstoque;
	}

	public int getCodigo() {
		return codigo;
	}

	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public float getValor() {
		return valor;
	}

	public void setValor(float valor) {
		this.valor = valor;
	}

	public int getQuantidadeEstoque() {
		return quantidadeEstoque;
	}

	public void setQuantidadeEstoque(int quantidadeEstoque) {
		this.quantidadeEstoque = quantidadeEstoque;
	}
	
}
