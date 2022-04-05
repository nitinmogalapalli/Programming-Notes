//File: EvenOdd.java
/* program to check a number even  or odd */

import java.lang.*;

class EvenOdd
{
	public static void main(String args[])
	{
		int numEOO = 5;

		if( (numEOO % 2) == 0 )
		{
			System.out.println(numEOO + " is an Even Number...");
		}
		else
		{
			System.out.println(numEOO + " is an Odd Number...");
		}
	}
}