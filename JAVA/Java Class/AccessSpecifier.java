/*
			ACCESS specifiers

Default	: without any specifiers can be treated as Default specifier
private	: The members can be accessed by its(class) members
public	: Can be accessed by all members
protected	: It is just like a public specifier in the same file

	These can be specified infront of the members like 
	variables:	specifier static datatype variableName;
	methods:	specifier static returntype methodName()
		{
			//body of the method
		}
*/

class Box
{
	private double length, breadth, height;
	
	Box()
	{
		length = breadth = height = -1;
	}
	public void setValues(double l,double w,double h)
	{
		length = l;
		breadth = w;
		height = h;
	}

	void volume()
	{
		System.out.println("Volume is: " + length*breadth*height);
	}
}

class AccessSpecifier
{
	public static void main(String args[])
	{
		Box b1 = new Box();
		
		b1.volume();

		Box b2 = new Box();
		
/*		b2.length = 10;
		b2.breadth = 5;
		b2.height = 2;
*/
		b2.setValues(10,5,2);

		b2.volume();
	}
}