
public class ControleIfElse {

	public static void main(String[] args) {
		int idade;
		boolean AmigoDoDono;
		AmigoDoDono = true;
		idade = 17;
		if(idade < 18 || !AmigoDoDono){
			System.out.println("N�o pode entrar na festa.");
		}else{
			System.out.println("Pode entrar.");
		}
	}

}
