// Example program to understand the constructor
// File: ConstructorDemo.java

class Box
{
	double length, breadth, height;

	Box()
	{
		length = -1;
		breadth = -1;
		height = -1;
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

class ConstructorDemo
{
	public static void main(String ar[])
	{
		Box b1 = new Box();

		System.out.println("The Volume of B1 box is: " + b1.volume());
	}
}