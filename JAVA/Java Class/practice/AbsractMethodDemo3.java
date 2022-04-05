// Abstract methods Example

/*
	"abstract" keyword is used to define a method as abstract inorder to 
	specify that method is going to defined here and implemented / 
	overrided in the sub classes of the "abstract" class.


	the class which contain abstract methods should declared as abstract.

*/

abstract class AbstractFigure
{
	double length, width, height;

	AbstractFigure()
	{
		length = width = height = -1;
	}
	abstract void area();
	abstract void volume();
}

class Rectangle extends AbstractFigure
{
	Rectangle(double l,double w,double h)
	{
		length = l;
		width = w;
		height = h;
	}
	
	void area()
	{
		System.out.println("The area of Rectangle is: " + length*width);
	}
	void volume()
	{
		System.out.println("The volume of the Rectangle is: " + length*width*height);
	}
	
}

class AbstractMethodDemo3
{
	public static void main(String args[])
	{
		Rectangle r = new Rectangle(2.5,4.5,6.5);
		r.area();
		r.volume();                                                                                                                                                                                                                                                      
	}
}