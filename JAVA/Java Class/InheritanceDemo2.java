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

class SubSubClass extends SubClass
{
	double cost;
	
	void disC()
	{
		System.out.println("The Cost from Sub Sub Class : " + cost);
	}

}
class InheritanceDemo2
{
	public static void main(String args[])
	{

		SuperClass supObj = new SuperClass();

		supObj.length = 4;
		supObj.breadth = 5;

		supObj.disLB();

		SubClass subObj = new SubClass();
//		subObj.setLBH(2.0,4.5,3.0);

		subObj.length = 2;
		subObj.breadth = 1;
		
		subObj.height = 3;

		subObj.disLB();
		subObj.disLBH();
		
		SubSubClass subsubObj = new SubSubClass();
		subsubObj.length = 22; 
		subsubObj.breadth = 11;
		
		subsubObj.height = 33;

//		subsubObj.setLBH(11.1,22.2,33.3);

		subsubObj.cost = 35.98;

		subsubObj.disLBH();
		subsubObj.disC();
		
	}
}