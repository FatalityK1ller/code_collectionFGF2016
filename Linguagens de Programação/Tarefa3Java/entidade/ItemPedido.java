package entidade;

public class ItemPedido {
	private Produto prodItem;
	private int qtdItem;
	
	public ItemPedido(Produto prodItem, int qtdItem) {
		super();
		this.prodItem = prodItem;
		this.qtdItem = qtdItem;
	}

	public Produto getProdItem() {
		return prodItem;
	}

	public void setProdItem(Produto prodItem) {
		this.prodItem = prodItem;
	}

	public int getQtdItem() {
		return qtdItem;
	}

	public void setQtdItem(int qtdItem) {
		this.qtdItem = qtdItem;
	}
	
}
