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
	abstract void carea();
	abstract void volume();
	
}

class Cube extends AbstractFigure
{
	Cube(double l,double w,double h)
	{
		length = l;
		width = w;
		height = h;
	}
	

	/*void area()
	{
		System.out.println("The area of Rectangle is: " + length*width);
	}
*/
	void volume()
	{
		System.out.println("The volume of the Rectangle is: " + length*width*height);
	}	
	 void carea()
	{
	System.out.println("cube area is:");
   	}
}

class AbstractMethodDemo3
{
	public static void main(String args[])
	{
		Cube r = new Cube(2.5,4.5,6.5);
		r.carea();
         	                 	r.volume();

	}
}