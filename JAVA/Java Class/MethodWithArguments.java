// program that declare a method which accepts arguments

// File: MethodWithArguments.java

class Box
{
	double length, breadth, height;
	
	void setLBH(double l, double b, double h)
	{
		length = l;
		breadth = b;
		height = h;
	}

	double getVolume()
	{
		return length*breadth*height;
	}
}

class MethodWithArguments
{
	public static void main(String args[])
	{
		Box b1 = new Box();
		
		b1.setLBH(3,5,7);
	
		System.out.println("The Volume of Box B1 " + b1.getVolume());

		Box b2 = new Box();
	
		b2.setLBH(1,2,3);

		System.out.println("The Volume of Box B2 " + b2.getVolume());
	}
}