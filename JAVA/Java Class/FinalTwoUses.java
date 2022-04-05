// final keyword using before methods and classes

/*
	final:
	before Methods:
	        The methods that are said to be final can not be "Overridden" by the subclasses of that class.

	before Classes:
	        The classes that are said to be final can not be "inherited".

*/

final class A
{
	int i, j;
	A()
	{
		i = j = -1;
	}
	final void setValues(int ival, int jval)
	{
		i = ival;
		j = jval;
	}
}

class B  /*extends A*/   // B can not inherit the Class A, because A is "final"
{
	int i,j;
/*	void setValues(int ii,int jj)
	{
		i = ii;
		j = jj;
	}
*/    // setValues method can not be overridden because setValues in  the super class is "final"
	
	void showIJ()
	{
		System.out.println("The i and j values are: " + i + ", " + j);
	}
}


class FinalTwoUses
{
	public static void main(String args[])
	{
		B b = new B();
		b.showIJ();

		b.i = 6;
		b.j = 9;
		b.showIJ();

	}
}