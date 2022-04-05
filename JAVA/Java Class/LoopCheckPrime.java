/* program to find the given number is prime or not */

import java.util.*;

class LoopCheckPrime
{
	public static void main(String args[])
	{
		int num, i, count;

		Scanner sc = new Scanner(System.in);

		/* Reading value to check for prime */

		System.out.println("Enter an integer to check for PRIME: ");
		num = sc.nextInt();

		/* Finding the number for prime */
		count = 0;
		for( i = 1; i <= num; i++)
		{
			if( num%i == 0 )
				count++;
		}
		
		/* checking for prime */
		if( count == 2)
			System.out.println(num + " is a PRIME....");
		else
			System.out.println(num + " is NOT a PRIME...!!!!!");
	}
}