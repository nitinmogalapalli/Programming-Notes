/* Static introduction

Normally, a class member must be accessed only in conjunction with an object of its class. However, it is possible to create a member that can be used by class itself, without reference to a specific instance. To create such a member, precede its declaration with the keyword static.

You can declare both methods and variables to be static. The most common example of  a static member is main( ). main( ) is declared as static because it must be called before any objects exist.
Instance variables declared as static are global variables. When objects of its class are declared, no copy of a static variable is made. Instead, all instances of the class share the same static variable.

Methods declared as static have several restrictions:
•They can only call other static methods.
•They must only access static data.
•They cannot refer to "this" or "super" in any way.

If you need to initialize your static variables, you can declare a static block that gets executed exactly once, when the class is first loaded.

	1."static"	is a keyword.
	2.static members can be used to call by using class names.
		ClassName.Member[()];
	3.the static members can be assigned memory without related to the object creation.
	4.when the static members were created they can be shared by every object of the class.
	5.for this reason these static members are called as class members.
	6.static can be used infront of methods,  and variables.
	
*/


// program to understand the usage of static
//File: StaticDemoNew.java

class SN
{
	static int a = 5, b, c = 20;
	
	static
	{
		System.out.println("the Static block: \n");
		b = a + c;
	}

	SN()
	{
		a = b = c = 0;
	}

	static void myStaticMethod()
	{
		System.out.println("The Values of a , b , and c before assigning new values are: \n a = " + a + "\nb = " + b + "\nc = " 
+ c);
		a = 10;
		b = 15;
		c = 9;

		System.out.println("The Values of a , b , and c After assigning new values are: \n a = " + a + "\nb = " + b + "\nc = " 
+ c);
	}

	void myStaticMethodNew()
	{
		System.out.println("The Values of a , b , and c before assigning new values are: \n a = " + a + "\nb = " + b + "\nc = " 
+ c);
		a = 1;
		b = 2;
		c = 3;

		System.out.println("The Values of a , b , and c After assigning new values are: \n a = " + a + "\nb = " + b + "\nc = " 
+ c);
	}

	
}

class StaticDemoNew
{
	public static void main(String args[])
	{

	
		

		SN.myStaticMethod();
		SN snOb = new SN();

		snOb.myStaticMethodNew();

		SN snOb1 = new SN();
		snOb1.myStaticMethodNew();

	}
}