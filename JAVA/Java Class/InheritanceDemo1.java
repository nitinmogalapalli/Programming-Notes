// program to create a class that extends another class

//File: InheritanceDemo1.java

class SuperClass
{
	double length,breadth;

	void setLB(double l, double b)
	{
		length = l;
		breadth = b;
	}

	void disLB()
	{
		System.out.println("From Super Class...:");
		System.out.println("Length: " + length + "\nBreadth: " + breadth);
	}

	void area()
	{
		System.out.println("The area from Sup Class area meth: " + length*breadth);
	}
}

class SubClass extends SuperClass
{
	double height;

	void setLBH(double l, double b, double h)
	{
		setLB(l,b);
//		length = l;
//		breadth = b;
		height = h;
	}
	
	void disLBH()
	{
		System.out.println("From Sub Class...:");
		disLB();
		System.out.println("Height: " + height);
	}
	
	void volume()
	{
		System.out.println("The Volume from Sub class: " + length*breadth*height);
	}
}

class InheritanceDemo1
{
	public static void main(String args[])
	{
		SubClass subObj = new SubClass();
//		subObj.setLBH(2.0,4.5,3.0);

		subObj.length = 2;
		subObj.breadth = 1;
		
		subObj.height = 3;

		subObj.disLB();
		subObj.disLBH();
		
		SuperClass supObj = new SuperClass();

		supObj.length = 4;
		supObj.breadth = 5;

		supObj.disLB();
	}
}