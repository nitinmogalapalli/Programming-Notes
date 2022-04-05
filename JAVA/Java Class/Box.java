// Example of the class and Objects

// A Box class 

class Box   // Defining a class with Name Box
{
	double length,width;
	void area()
	{
		System.out.println("The are is: " + length*width);
	}
}

class BoxDemo
{
	public static void main(String args[])
	{
		Box b = new Box();   // creating and assigning memory to the Box type Object b
// assigning values to the b properties
		b.length = 10;
		b.width = 15;
// performing an operation: area by using b`s properties
		b.area();
	}
}