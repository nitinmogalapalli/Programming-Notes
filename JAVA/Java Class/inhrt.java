class FirstClass
{
	double dVar;

	FirstClass()
	{
		dVar = -1;
	}

	FirstClass(double d)
	{
		dVar = d;
	}
}

class SecondClass extends FirstClass
{
	double dVarN;

	SecondClass()
	{
		dVarN = -2;
	}

	SecondClass(double d1, double d2)
	{
		dVar = d1;
		dVarN = d2;
	}

	
}

class InheritanceDemo4
{
	public static void main(String args[])
	{
		FirstClass fc = new FirstClass();
		System.out.println(fc.dVar);
		/*SecondClass sc = new SecondClass();
		System.out.println(sc.dVarN);*/
		SecondClass sc=new SecondClass(5,6);
		System.out.println(fc.dVar);
		System.out.println(sc.dVar);
  		//System.out.println(sc.dVarN);
	
	}
} 