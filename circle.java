public class circle 
{	
	private double R;
public void setR(double x)
{
	R=x;
}
//perimetter
public double perimetter()
{
	return (double)(2*R*Math.PI);
}
//area
public double area() 
{
	return (double)(R*R*Math.PI);
}
public static void main(String args[]){
	circle circ1 = new circle();
	circle circ2 = new circle();
	circ1.setR(8);
	circ2.setR(16);
	System.out.println("Area of circ1 is: "+circ1.area());
	System.out.println("Perimetter of circ1 is: "+circ1.perimetter());
	System.out.println("Area of circ2 is: "+circ2.area());
	System.out.println("Perimetter of circ2 is: "+circ2.perimetter());

}
}