// Dynamic Method Dispatch

/* 
	Super class reference can refer to the sub class object.

	we can assign the sub class object to the super class referece(object variable).

	Using the super class reference we can call the overrided method in sub class. But, which version of the method to be executed will be decided at the run time based on the type of the object (the reference of the object) it is called by.
*/

class Shape
{
	double length,width,height;

	Shape()
	{
		length = width = height = -1;
	}

	void area()
	{
		System.out.println("The Shape NOT decided...");
	}

/*
	void volume()
	{
		System.out.println("The Shape NOT decided...");
	}
*/
}

class Triangle extends Shape
{
	Triangle(double hi,double wdt)
	{
		length  = hi;
		width = wdt;
	}

	void area()
	{
		System.out.println("The area of the Triangle is: " + (0.5*length*width));
	}

}

class Rectangle extends Shape
{
	Rectangle(double len,double wid)
	{
		length = len;
		width = wid;
	}

	void area()
	{
		System.out.println("The Area of Rectangle is: " + length*width);
	}
}

class BoxShape extends Shape
{
	BoxShape(double l,double w,double h)
	{
		length = l;
		width = w;
		height = h;
	}

	void volume()
	{
		System.out.println("The Volume of BoxShape is: " + length*width*height);
	}
}

class DynamicMethodDispatch
{
	public static void main(String args[])
	{
		Shape s ;

	//	s.area();
	//	s.volume();
		
		Triangle t = new Triangle(2.0,2.0);
		s = t;
//		s = new Triangle(2.0,2.0);
		s.area();

		s = new Rectangle(3.0,5.0);
		s.area();

		BoxShape bsp = new BoxShape(1.0, 1.0, 1.0);
//		s = new BoxShape(1.0,1.0,1.0);
		s = bsp;
		s.volume();
	}
}