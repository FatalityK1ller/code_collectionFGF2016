
public class Quadrado extends FiguraGeometrica {
	private float lado;

	public Quadrado() {
		super();
		this.lado = 1;
		
	}

	public Quadrado(String cor, float espessura,float lado) {
		super(cor, espessura);
		this.lado = lado;
		
	}

	@Override
	public float getArea() {
		 return 3.14f * this.lado * this.lado;
	}

	@Override
	public float getPerimetro() {
		// TODO Auto-generated method stub
		return 0;
	}

}
