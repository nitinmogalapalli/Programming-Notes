//Inheritance:

/*
	It is a concepts of OOP that implements IS-A relationship between the classes.
	Builds a hierarchy of classes  like
			 car(generalized class)
		------------------------------
		!	!	!
	               Ferrari       Benze       Maruti(specialized)
			         ---------------
			         !	          !
			  Maruti 800   Extra	
	It Allows to inherit the properties and methods of a class,
	Keyword "extends" is used to inherit a class ,
	Child class is a specialized class of the generalized Parent class.

*/

class Figure
{
	double length,width,height;

	Figure()
	{
		System.out.println("From Figure Constructor...");
		length = width = height  = 0;
	}

	void setValues(double l,double w)
	{
		length = l;
		width = w;
	}

	void setValues(double l,double w,double h)
	{
		length = l;
		width = w;
		height = h;
	}

	void getValues()
	{
		System.out.println("The values from figure class...:\nlength: " + length + "\nwidth: " + width + "\nheight: " + height);
	}
}

class Triangle extends Figure
{
	void tri_Area()
	{
		System.out.println("The Triangle area is : " + length*width*0.5);
	}
}

class Cube extends Figure
{

	void cube_setValues(double a)
	{
		length = width = height = a;
	}
	void cube_Area()
	{
		System.out.println("The Cube area is : " + length*width);
	}
	void cube_Volume()
	{
		System.out.println("The Cube area is: " + length*width*height);
	}
}

class InheritanceDemo
{
	public static void main(String args[])
	{

//		Figure f = new Figure();
//		f.getValues();
		
		Triangle tri1 = new Triangle();
		tri1.setValues(2.4,4.2);
		tri1.tri_Area();
		
		Cube cb = new Cube();
		cb.cube_setValues(5.0);
		cb.cube_Area();
		cb.cube_Volume();
	}
}

