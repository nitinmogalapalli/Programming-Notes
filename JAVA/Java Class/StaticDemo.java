/* Static introduction

Normally, a class member must be accessed only in conjunction with an object of its class. However, it is possible to create a member that can be used by class itself, without reference to a specific instance. To create such a member, precede its declaration with the keyword 'static'.

You can declare both methods and variables to be static. The most common example of  a static member is main( ). main( ) is declared as static because it must be called before any objects exist.

Instance variables declared as static are global variables. When objects of its class are declared, no copy of a static variable is made for (each object). Instead, all instances of the class share the same static variable.

Methods declared as static have several restrictions:
•They can only call other static methods.
•They must only access static data.
•They cannot refer to "this" or "super" in any way.

If you need to initialize your static variables, you can declare a static block that gets executed exactly once, when the class is first loaded.

	1."static"	is a keyword.
	2.static members can be used to call members of a class by using class names.
		ClassName.Member[()];
	3.the static members can be assigned memory without related to the object creation.
	4.when the static members were created they can be shared by every object of the class.
	5.for this reason these static members are called as class members.
	6.static can be used infront of methods,  and variables.
	
*/

class Box
{
	static double length, width, height;

	Box()
	{
		length = 20;
		width = 10;
		height = 5;
	}

	static void setValues(double l,double w,double h)
	{
		length = l;
		width = w;
		height = h;
	}

	static void area()
	{
		System.out.println("The Area is : " + length*width);
	}

	static void volume()
	{
		System.out.println("The Volume is : " + length*width*height);
	}
}

class StaticDemo
{
	public static void main(String args[])
	{
  		Box.area();
		Box.length = 10;
		Box.width = 15;
		Box.height = 2;

		Box.area();
		Box.volume();

		Box.length = 5;
		Box.area();
		Box.volume();

                                  Box b1=new Box();
                                  b1.volume();
                                  b1.setValues(10.0,10,10);

                                  System.out.println("length of the b1 is "+b1.length);
                                  System.out.println("width of the b1 is "+b1.width);
                                  System.out.println("height of the b1 is "+b1.height);

                                  b1.area();
                                  b1.volume();
	}
}
