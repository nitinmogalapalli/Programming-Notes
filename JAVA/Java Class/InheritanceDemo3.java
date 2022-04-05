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


class InheritanceDemo3
{
	public static void main(String args[])
	{

		SuperClass  supObj;

		SubClass subObj = new SubClass();
		subObj.setLBH(2.0,4.5,3.0);

		subObj.disLB();
		subObj.disLBH();
		
		supObj = subObj;

		supObj.length = 3;
		supObj.breadth = 4;
//		supObj.height = 5;  Error

		supObj.disLB();

//		supObj.disLBH();  Error Because it can not have the knowledge of the sub class members(Can not find sysmbol)

		
	}
}