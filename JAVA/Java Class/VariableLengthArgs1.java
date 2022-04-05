// program to understand the variable length arguments
// File: VariableLengthArgs1.java

// This program is used to search an element that you given

import java.util.*;

class Some
{
	void varArgsMeth( int a, int b ,int ... var)
	{
		System.out.println("The Elements in the Array: " + var.length);
		for(int x : var)
		{
			System.out.println("var[" + x + "] : " + x);
		}
	}
}

class VariableLengthArgs1
{
	public static void main(String args[])
	{
		Some sObj = new Some();
	
		/*int a[] = {3};
		int b[] = {2,4,7};
		int c[] = {79, 99, 100, 98};*/

//		sObj.varArgsMeth();

		sObj.varArgsMeth(3, 2);

		sObj.varArgsMeth(2,4,7);

		sObj.varArgsMeth(79, 99, 100, 98);

		
	}
}

