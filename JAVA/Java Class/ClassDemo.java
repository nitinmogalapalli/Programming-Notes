// Java program to illustrate the usage of Class

//class definition
class Box
{
	double len,bredth,height;
}

class ClassDemo
{
	public static void main(String args[])
	{
		Box boxObj1 = new Box();

		boxObj1.len = 5;
		boxObj1.bredth = 3;
		boxObj1.height = 5;


		double vol = boxObj1.len * boxObj1.bredth * boxObj1.height;

		System.out.println("The Volume is : " + vol);

	}

}