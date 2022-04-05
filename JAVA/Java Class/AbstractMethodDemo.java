// Abstract methods Example

/*
	"abstract" keyword is used to define a method as abstract The method declared as abstract in super class is going to be implemented / overrided in the sub classes of the "abstract" class.

	Those classes which have abstract method declaration can be called as abstract classes. That class should be declared as abstract. 

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

abstract class Rectangle extends AbstractFigure
{
	Rectangle(double l,double w)
	{
		length = l;
		width = w;
	}
	
	void area()
	{
		System.out.println("The area of Rectangle is: " + length*width);
	}


	abstract void volume();
/*
	{
//		System.out.println("The volume of the Rectangle is: " + length*width*height);
	}
*/
	
}

class AbstractMethodDemo
{
	public static void main(String args[])
	{
		Rectangle r = new Rectangle(2.5,4.5);
		r.area();
	}
}