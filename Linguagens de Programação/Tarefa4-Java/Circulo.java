
public class Circulo extends FiguraGeometrica {
	private float raio;

	public Circulo() {
		super();
		this.raio =1;
	}

	public Circulo(String cor, float espessura,float raio) {
		super(cor, espessura);
		this.raio = raio;
	}

	public float getRaio() {
		return raio;
	}

	public void setRaio(float raio) {
		this.raio = raio;
	}

	@Override
	public float getArea() {
		  //float area = 3.14f * this.raio * this.raio;
        //return area;
        return 3.14f * this.raio * this.raio;
	}

	@Override
	public float getPerimetro() {
		   float perimetro = 2 * raio;
	       return perimetro;
	}

}
