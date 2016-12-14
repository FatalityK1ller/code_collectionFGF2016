package tarefa02;
import java.util.Scanner;
public class tarefa02 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner sc = new Scanner(System.in);
		
		System.out.print("Digite um numero: ");
		
		int num = sc.nextInt();
		
		for(int i=1;i<=num;i++){
			if(num%i == 0){
				System.out.println("Divisil : "+i);
			}
		}

	}

}
