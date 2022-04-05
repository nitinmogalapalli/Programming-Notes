// InterfaceExample.java

/*

	Interface:
	
	1.Interfaces declares the requirements of the classes.

	2.In order to represent a class we use a keyword "class",
	to represent an interface we use "interface" keyword.
		
	3.It is a Fully Abstract class.

	4.Interfaces should not contain any implementations/definitions, so they must be implemented by the classes (which implements them).

	5.the data members defined in the interface will be public static final, and the methods must be implemeted.

	6.we use "implements" keyword to indicate that a class is implementing an interface.

	syntax for defining a class that implements interface(s):
		
		[abstract] class ClassName [extends OtherclassName [implements interface1[, interface2 [,interface3...]]]]
		{
			// body of the class that implements the methods of the interfaces
		}


	> class can implement any number of interfaces. this is the means following multiple inheritance indirectly.

	7.If an interface2 wants to add some of the requirements to 
	an existing interface1 it should "extends" the interface1.

	syntax to define an interface:
	
		interface name [extends otherinterfacename]
		{
			variable initializations;
			method declarations;
		}


	8.Interfaces can not be Instantiated(can not create an 	Object to an Interface)

	9.You can access the method declarations of the Interface using interface object variable assining object of the classes which is implementing that interface.
*/


interface AddTwo
{
	int a = 5,b=5; // these treated as public static final variables
	void addTwoMethod(int i,int j);
}

// Interface extending another interface

interface AddThree extends AddTwo
{
	int c= 10,d = 15,e= 20;
	void addThreeMethod(int i, int j, int k);
	
}

// Defining a class that implements two interfaces

class ClassInterface implements AddTwo, AddThree
{
	

	public void addTwoMethod(int i, int j)
	{
//		 a = i ; //Error: These are final in AddTwo Interface
//		 b = j;
		System.out.println("The addition of i: " + i + " and j: " + j + " is : " + (i+j));
	}

	public void addThreeMethod(int i, int j, int k)
	{
		int c = i, d = j, e = k;
		System.out.println("The addition of c: " + c +", d: " + d + " and e: " + e + " is : " + (c+d+e));
	}
}

class InterfaceExample
{
	public static void main(String args[])
	{
		ClassInterface ci = new ClassInterface();

//		ci.a = 3;	/* These are Final variables and can
//		ci.b = 5;	not assign values */

/*
		System.out.println("The values of a and b: " + AddTwo.a + ", " + AddTwo.b);

		ci.addTwoMethod(2,3);
		ci.addThreeMethod(5,6,9);
*/

		AddTwo atw = new ClassInterface();

		atw.addTwoMethod(2,3);
//		atw.addThreeMethod(1,3,2);

	}
}