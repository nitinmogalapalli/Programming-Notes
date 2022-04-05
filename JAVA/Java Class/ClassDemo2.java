// Java program to illustrate the use of Class

//class definition
class Box
{
	double length,bredth,height;

	void volume()
	{
		double vol = length*bredth*height;

		System.out.println("The Volume is: " + vol);
	}

}

class ClassDemo2
{
	public static void main(String args[])
	{
		Box boxObj1 = new Box();

		boxObj1.length = 5;
		boxObj1.bredth = 3;
		boxObj1.height = 5;


		boxObj1.volume();

		Box boxObj2 = new Box();

		boxObj2.length = 2;
		boxObj2.bredth = 2;
		boxObj2.height = 2;

		boxObj2.volume();
	}

}