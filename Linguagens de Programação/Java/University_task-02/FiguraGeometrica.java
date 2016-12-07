
public abstract class FiguraGeometrica{
	private String cor;
	private float espessura;
	
	public FiguraGeometrica(){
		this.cor = "branco";
		this.espessura = 1;
		
	}

	public FiguraGeometrica(String cor, float espessura) {
		super();
		this.cor = cor;
		this.espessura = espessura;
	}

	public String getCor() {
		return cor;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}

	public float getEspessura() {
		return espessura;
	}

	public void setEspessura(float espessura) {
		this.espessura = espessura;
	}
	
	public abstract float getArea();
	    
	public abstract float getPerimetro();

}
