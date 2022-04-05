// program to understand the variable length arguments
// File: VariableLengthArgs.java

// This program is used to search an element that you given

import java.util.*;

class Some
{
	void varArgsMeth(int var[])
	{
		System.out.println("The Elements in the Array: " + var.length);
		for(int x : var)
		{
			System.out.println("var[ ] : " + x);
		}
	}
}

class VariableLengthArgs
{
	public static void main(String args[])
	{
		Some sObj = new Some();
	
		int a[] = {3};
		int b[] = {2,4,7};
		int c[] = {79, 9,90, 100, 98};

//		sObj.varArgsMeth(); // Error

		sObj.varArgsMeth(a);

		sObj.varArgsMeth(b);

	sObj.varArgsMeth(c);

		
	}
}

