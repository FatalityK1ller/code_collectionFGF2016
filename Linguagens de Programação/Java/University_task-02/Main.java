import java.util.ArrayList;
public class Main  {

	private static float soma;

	public static void main(String[] args) {
		 FiguraGeometrica fg1 = new Circulo();
	     FiguraGeometrica fg2 = new Circulo("Azul",2,2);
	     FiguraGeometrica fg3 = new Quadrado();
	     FiguraGeometrica fg4 = new Quadrado("Azul",4.3f,2.4f);
	        
	     ArrayList<FiguraGeometrica> figs = new ArrayList<FiguraGeometrica>();
	        
	        figs.add(fg1);
	        figs.add(fg2);
	        figs.add(fg3);
	        figs.add(fg4);
	        
	        
	        
	     soma = 0.0f;
	     for(int i = 0; i < figs.size(); i++){
	          FiguraGeometrica aux = figs.get(i);
	            
	          soma += aux.getArea();
	     }
	     
	     
		System.out.println(soma);
	}

}
