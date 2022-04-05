// program to understand the Nested classes concept

// File: NestedClass.java

class Outer
{
	int i_o = 90;

	void display()
	{
		System.out.println("From Outer Display :\ni_o : " + i_o);

		Inner iObj = new Inner();
		iObj.display();
	}
	class Inner
	{
		void display()
		{
			i_o = 45;
			System.out.println("From Inner Display :\ni_o : " + i_o);
		}
	}
}

class NestedClass
{
	public static void main(String arg[])
	{
		Outer oiObj = new Outer();
		
		oiObj.display();

		
	}
}