
public class Minha_Conta {

	public static void main(String[] args) {
		My_Conta minhaConta, x;
		
		minhaConta = new My_Conta();
		minhaConta.nome = "Jefferson";
		minhaConta.Saldo = 0.0f;
		
		x = new My_Conta();
		x.nome = "Leando";
		x.Saldo = 300.00f;
		
		//minhaConta.Saca(minhaConta.Saldo);
		minhaConta.Deposita(300);
		minhaConta.Saca(50);
		minhaConta.Deposita(500);
		
		
		
		System.out.println("Nome da conta: "+ minhaConta.nome + " " + minhaConta.Saldo + "R$.");
		System.out.println("Nome da conta: "+ x.nome + " " + x.Saldo + "R$.");
		if(x == minhaConta){
			System.out.println("S�o iguais");
		}else{
			System.out.println("N�o s�o iguais");
		}
		
		minhaConta.transfere(minhaConta, x , 200);
		
		System.out.println("Nome da conta: "+ minhaConta.nome + " " + minhaConta.Saldo + "R$.");
		System.out.println("Nome da conta: "+ x.nome + " " + x.Saldo + "R$.");
	}
/*
 * Como as duas contas apontam para o mesmo endere�o de mem�ria, se eu
 * alterar uma, a outra tamb�m ser� aletera.
 * Agora se as duas tivessem sido criadas cada uma com um "new" diferente.
 * Para poder comparar com o comando if eu teria que fazer atributo por atributo.
 * 
 */
}
