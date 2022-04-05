/* program to print the maximum among 10 values */

import java.util.*;

class MaxAmong10Values
{
	public static void main(String arg[])
	{
		int maxArray[] = new int[10];
		int i,max;

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter 10 values:");
		for(i=0;i<10;i++)
			maxArray[i] = sc.nextInt();

		max = maxArray[0];

		for(i=1;i<10;i++)
		{
			if( max >= maxArray[i] )
				continue;
			else
				max = maxArray[i];
		}

		System.out.println("The Maximum Among the Above numbers is: " + max);
	}
}