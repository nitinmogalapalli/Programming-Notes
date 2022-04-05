// Example program to understand the constructor
// File: ConstructorDemo.java

class Box
{
	double length, breadth, height;

	Box(double l, double b, double h)
	{
		length = l;
		breadth = b;
		height = h;
	}	

	void setLBH(double l,double b,double h)
	{
		length = l;
		breadth = b;
		height = h;
	}

	double volume()
	{
		return length*breadth*height;
	}
}

class ConstructorWithParametersDemo
{
	public static void main(String ar[])
	{
		Box b1 = new Box(2,2,2);

		System.out.println("The Volume of B1 box is: " + b1.volume());
	}
}