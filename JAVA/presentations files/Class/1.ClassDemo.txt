/* Example for creating a Class and its instantiate */
class Box
{
	double width,height,depth;
}

class ClassDemo
{
	public static void main(String arg[])
	{
		Box b = new Box();

		b.width = 20;
		b.height = 30;
		b.depth = 40;


	System.out.println("The Values in the box object b are:\nWidth: " + b.width + "\nheight: " + b.height + "\ndepth: " + b.depth);
	}
}
