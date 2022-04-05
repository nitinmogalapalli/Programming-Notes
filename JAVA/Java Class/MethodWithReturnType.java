// program that illustrate the class with a method with a return type

// File: MethodWithReturnType.java

class Box
{
	double length, breadth, height;

	void setLBH()
	{
		length = 0;
		breadth = 0;
		height = 0;
	}

	double volume()
	{
		double vol = length * breadth * height;
		return vol;
//		System.out.println("The Volume is: " + vol);
	}
}

class MethodWithReturnType
{
	public static void main(String are[])
	{
		Box b1 = new Box();
		
		b1.length = 20.0;
		b1.breadth = 20;
		b1.height = 10;


		double vol = b1.volume();

		System.out.println("The Volume is: " + vol);
	}
}