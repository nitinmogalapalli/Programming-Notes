/*  program to find greater among three values */

import java.util.*;
class Greater  
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int num1,num2,num3;
		System.out.println("Enter Three numbers to find Greatest:");
		num1 = sc.nextInt();
		num2 = sc.nextInt();
		num3 = sc.nextInt();

		if( num1 > num2 )
		{
			if( num1 > num3 )
				System.out.println(num1 + " is Greater value...");
			else
				System.out.println(num3 + " is Greater value...");
		}
		else
		{
			if( num2 > num3 )
				System.out.println(num2 + " is Greater value...");
			else
				System.out.println(num3 + " is Greater value...");
		}
	}
}