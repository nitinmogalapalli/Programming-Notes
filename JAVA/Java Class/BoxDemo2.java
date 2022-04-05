/*

retrun_type MethodName(Parameters_list)
{
	method body

}

class ClassName
{
	Data Members

	Member Functions1()
	{
		data members
		
	}
	Meber Fuction2()
	{
		data members
	}
}


class Box
{
	double length,width, height;
	double area()
	{
		return length*width;
	}
	double volume()
	{
		retrun (length*width*height);
	}
}	*/

// Constructors
/*
	these are also methods with no retrun type,
	they have the same name as the class name.

	these constructors are used to executes some statements 
	at the time of object creation.
*/

class Box
{
	double length,width, height;
	Box()
	{
		length = 1;
		width = 4;
		height = 3;
	}
	double area()
	{
		return length*width;
	}
	double volume()
	{
		return (length*width*height);
	}
}
class BoxDemo2
{
	public static void main(String args[])
	{
		Box b1 = new Box();

		System.out.println("The are is: " +b1.area());
	}
}
