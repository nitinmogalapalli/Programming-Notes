// Method Overriding

/*

overloading:
	concept of sharing the same name for methods in the same class.

Overriding:
	concept of defining the same method signature/prototype in the subclass which existed in the super class.
*/

class FirstClass
{
	int i , j;
	FirstClass()
	{
		i = j = 1;
	}

	void show()
	{
		System.out.println("The i and j values of First Class: " + i + " , " + j);
	}
}

class SecondClass extends FirstClass
{
	int k;
	SecondClass()
	{
//		super();
//		i = 1;
//		j = 1;
		k =1;
	}
	/* Redifining the super class show method...(Overriding the show method defined in super class...) */
	void show()
	{
		super.show();
		System.out.println("The k value in B: " + k);
	}


	void show(String o)
	{
		System.out.println(o + " : " + k);
	}

}

class MethodOverriding
{
	public static void main(String args[])
	{
		FirstClass ob1 = new FirstClass();
		ob1.show();

		SecondClass ob = new SecondClass();
		ob.show();
//		ob.show("From SecondClass Show Method...");
	}
}