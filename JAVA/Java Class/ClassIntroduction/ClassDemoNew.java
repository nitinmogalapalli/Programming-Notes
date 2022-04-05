/* Example for creating a Class and Two instances instances */
class NewBox
{
}

class Box
{
	double width,height,depth;
}

class ClassDemoNew
{
	public static void main(String arg[])
	{
		NewBox nb = new NewBox();

		Box b1 = new Box();

		b1.width = 20;
		b1.height = 30;
		b1.depth = 40;


		System.out.println("The Values in the box object b1 are:\nWidth: " + b1.width + "\nheight: " + b1.height + "\ndepth: " + b1.depth);

		Box b2 = new Box();

		b2.width = 1;
		b2.height = 3;
		b2.depth = 4;


		System.out.println("The Values in the box object b2 are:\nWidth: " + b2.width + "\nheight: " + b2.height + "\ndepth: " + b2.depth);

	}
}
