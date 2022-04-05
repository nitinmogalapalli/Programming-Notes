package Box;

class Box
{
	double length,width,height;
	Box()
	{
		System.out.println("Inside a box class...");
	}
}

class BoxOne
{
	double one;
	BoxOne()
	{
		System.out.println("Inside a boxone class...");	
	}
}

class BoxExample
{
	public static void main(String args[])
	{
		Box b = new Box();
		BoxOne bo = new BoxOne();	
	}
}