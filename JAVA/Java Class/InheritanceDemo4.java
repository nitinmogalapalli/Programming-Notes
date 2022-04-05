// program to understand the inheritance constructors

/*

	The Default constructor calling( in the inheritance concept) can be in the following order:
	Initially the super class default constructor will be called,
	Then the first sub class of the super class called, 
	then the sub sub class default/parameterized constructor will be called,
	and so on.

	when we create an object (with default constructor) to the sub class that extending a super class with both having default constructors.
*/	
// File: InheritanceDemo4.java

class FirstClass
{
	double dVar;

	FirstClass()
	{
		System.out.println("In FirstClass Default Constructor...");
		dVar = 0;
	}

	FirstClass(double d)
	{
		System.out.println("In FirstClass Constructor with one parameter...");
		dVar = d;
	}
}

class SecondClass extends FirstClass
{
	double dVarN;

	SecondClass()
	{
		System.out.println("In SecondClass Default Constructor...");
		dVarN = 0;
	}

/*	SecondClass(double d1)
	{
		System.out.println("In SecondClass Constructor with one parameter...");
		dVarN = d1;
	}
*/
	SecondClass(double d1, double d2)
	{
		dVar = d1;
		dVarN = d2;
	}
}


class ThirdClass extends SecondClass
{
	double dVarN1;
	ThirdClass()
	{
		System.out.println("In ThirdClass Constructor...");
		dVarN1 = 0;	
	}
}


class InheritanceDemo4
{
	public static void main(String args[])
	{
//		FirstClass fc = new FirstClass();
//		SecondClass sc = new SecondClass();

//		SecondClass sc1 = new SecondClass(23.45);
		ThirdClass tc = new ThirdClass();
	}
}