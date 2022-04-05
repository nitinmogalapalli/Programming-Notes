/* program to print prime numbers in the given range */

import java.util.*;

class LoopPrintPrimeRange
{
	public static void main(String args[])
	{
		int range, j, i, count;

		Scanner sc = new Scanner(System.in);

		/* Reading value to check for prime */

		System.out.println("Enter range to print PRIME numbers: ");
		range = sc.nextInt();

		/* Finding the number for prime */
		for(j = 1; j <= range; j++)
		{
		count = 0;
		for( i = 1; i <= j; i++)
		{
			if( j%i == 0 )
				count++;
		}
		
		/* checking for prime */
		if( count == 2)
			System.out.println(j + " is a PRIME....");
		}
	}
}