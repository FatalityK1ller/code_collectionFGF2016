
public class Pilha {
	
	private int[] stack;
	private int max;
	private int top;
	
	public Pilha(int tam){
		
		this.max = tam - 1;
		this.top = -1; // pilha vazia
		this.stack = new int[tam];
	}
	
	public void Push(int x){
		
		if(this.top < this.max){
			this.top += 1;
			this.stack[this.top] = x;
			
		}
		else{
			System.out.println("Pilha Cheia");
		}
			
		
	}
	
	public void top(){
		if(this.top > -1){
			System.out.println(this.stack[this.top]);
		}
		else{
			System.out.println("Pilha vazia");
		}
		
	}
}
