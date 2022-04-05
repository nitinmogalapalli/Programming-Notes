/* program to print even numbers from 1 to 100 */

import java.util.*;

class EvenNumbersFrom1to100
{
	public static void main(String args[])
	{
		int i=0;
		System.out.println("The Even Numbers from 1 to 100:");
		while( i <= 100 )
		{
			if( i%2 == 0 )
				System.out.print(i+ "  ");
			i++;
		}
	}
}