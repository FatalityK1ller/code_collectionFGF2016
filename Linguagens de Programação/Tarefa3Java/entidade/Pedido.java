package entidade;
import java.util.ArrayList;

public class Pedido {
	
	private int numero;
	private Cliente cliente;
	private ArrayList<ItemPedido> itens;
	
	public Pedido(int numero, Cliente cliente, ArrayList<ItemPedido> itens) {
		super();
		this.numero = numero;
		this.cliente = cliente;
		this.itens = itens;
	}

	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}
	
	public Cliente getCliente() {
		return cliente;
	}

	public void setCliente(Cliente cliente) {
		this.cliente = cliente;
	}

	public ArrayList<ItemPedido> getItens() {
		return itens;
	}

	public void setItens(ArrayList<ItemPedido> itens) {
		this.itens = itens;
	}
	
	public void imprimir(){
        System.out.println("PEDIDO");
        System.out.println("Número: "+ this.numero);
        
        System.out.println("CLIENTE");
        System.out.println("Nome: "+ this.cliente.getCodigo()+ " - " + this.cliente.getNome());
        System.out.println("Endereço: " + this.cliente.getEndereco());
        
      for(int i = 0; i < this.itens.size();i++){
            ItemPedido ip = this.itens.get(i);
            
            Produto p = ip.getProdItem();
            
            System.out.println(ip.getQtdItem() + " - " + ip.getProdItem());
      }
	}
            
        

}
