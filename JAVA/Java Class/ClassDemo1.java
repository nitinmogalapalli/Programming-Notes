// Java program to illustrate the use of Class

//class definition
class Box
{
	double len,bredth,height;
}

class ClassDemo1
{
	public static void main(String args[])
	{
		Box boxObj1 = new Box();

		boxObj1.len = 5;
		boxObj1.bredth = 3;
		boxObj1.height = 5;


		double vol = boxObj1.len * boxObj1.bredth * boxObj1.height;

		System.out.println("The Volume is : " + vol);

		Box boxObj2 = new Box();

		boxObj2.len = 2;
		boxObj2.bredth = 2;
		boxObj2.height = 2;


		vol = boxObj2.len * boxObj2.bredth * boxObj2.height;

		System.out.println("The Volume is : " + vol);
	}

}