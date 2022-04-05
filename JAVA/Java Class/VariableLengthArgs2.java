// program to understand the variable length arguments
// File: VariableLengthArgs1.java

// This program is used to search an element that you given

import java.util.*;

class Some
{
	void varArgsMeth(int ... var)
	{
		System.out.println("The Elements in the Array: " + var.length);
		for(int x : var)
		{
			System.out.println("var[" + x + "] : " + x);
		}
	}

	void varArgsMeth(String ... var)
	{
		System.out.println("The Elements in the Array: " + var.length);
		for(String x : var)
		{
			System.out.println("var[" + x + "] : " + x);
		}
	}

	void varArgsMeth(int a, int b, boolean ... var)
	{
		System.out.println("The Elements in the Array: " + var.length);
		System.out.println("int values you passed: " + a + " " + b);
		for(boolean x : var)
		{
			System.out.println("var[" + x + "] : " + x);
		}
	}
}

class VariableLengthArgs2
{
	public static void main(String args[])
	{
		Some sObj = new Some();
	
		/*int a[] = {3};
		int b[] = {2,4,7};
		int c[] = {79, 99, 100, 98};*/

		//sObj.varArgsMeth();

		sObj.varArgsMeth(3, 5, 7);

		sObj.varArgsMeth("Hello" , "Hi" , "This" , "Take");

		sObj.varArgsMeth(79, 99, true, false);

		
	}
}

