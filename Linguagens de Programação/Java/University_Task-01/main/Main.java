package main;

import java.util.ArrayList;

import entidade.*;

public class Main {

	public static void main(String[] args) {
		
		Produto p1 = new Produto(1, "Mouse", 20.0f, 100);
		Produto p2 = new Produto(2, "Teclado", 50.0f, 100);
		Produto p3 = new Produto(3, "Monitor", 400.0f, 100);
		
		Cliente c = new Cliente(1, "João Silva", "Rua A, 123 - Centro - Fortaleza - CE");
		
		ItemPedido i1 = new ItemPedido(p1, 5);
		ItemPedido i2 = new ItemPedido(p2, 3);
		ItemPedido i3 = new ItemPedido(p3, 2);
		
		ArrayList<ItemPedido> itens = new ArrayList<ItemPedido>();
		itens.add(i1);
		itens.add(i2);
		itens.add(i3);
		
		Pedido p = new Pedido(1, c, itens);
		
		/*Imprimir o pedido conforme a seguir:
		 *            PEDIDO
		 * Número: 00001
		 * Cliente: 1 - João Silva
		 * Endereço: Rua A, 123 - Centro - Fortaleza - CE
		 * 			  ITENS
		 *  Código | Descrição | Quantidade | Valor Unitário | Valor Parcial
		 *  1 		 Mouse 		 5					   20,00		  100,00
		 *  2 		 Teclado 	 3					   50,00		  150,00
		 *  3 		 Monitor 	 2					  400,00		  800,00
		 *  TOTAL: 1050,00
		 */
	}

}
