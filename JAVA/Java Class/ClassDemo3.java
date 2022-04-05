// Java program to illustrate the use of Class by declaring a method in a class

/*

	A method declaration has the following syntax:
	
	return_type methodName(parameters/Formal Parameters declaration)
	{
		// Method body
	}

*/

//class definition

class Box
{
	double length,bredth,height;
	
	void volume(double l, double b, double h)
	{
		double vol = l * b * h;

		System.out.println("The Volume is: " + vol);
	}

}

class ClassDemo3
{
	public static void main(String args[])
	{
		Box boxObj1 = new Box();

/*		boxObj1.length = 5;
		boxObj1.bredth = 3;
		boxObj1.height = 5;

*/
		boxObj1.volume(5.0,3.0,5.0);

		Box boxObj2 = new Box();

//		boxObj2.length = boxObj2.bredth = 		boxObj2.height = 2;

		boxObj2.volume(2.0,2.0,2.0);
	}

}