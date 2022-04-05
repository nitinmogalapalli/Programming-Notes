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
	

	void setValues(double l, double b, double h)
	{
		length = l;
		bredth = b;
		height = h;
	}

	double volume()
	{

		double vol = length * bredth * height;

		return vol;		
	}

}

class ClassDemo4
{
	public static void main(String args[])
	{
		Box boxObj1 = new Box();

/*		boxObj1.length = 5;
		boxObj1.bredth = 3;
		boxObj1.height = 5;   */

		boxObj1.setValues(5.0,3.0,5.0);
		System.out.println("The Volume is: " + boxObj1.volume());

		Box boxObj2 = new Box();

		boxObj2.setValues(2.0,2.0,2.0);
		double v = boxObj2.volume();

		System.out.println("The Volume of second object is: " + v);
	}

}