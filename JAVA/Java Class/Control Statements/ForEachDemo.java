// program to understand the for-each loop

// File: ForEachDemo.java

import java.util.*;

class ForEachDemo
{
	public static void main(String args[])
	{
		int a;
		int search[] = {2,5,8,9,7,4,6,3,1,0};
		Scanner s = new Scanner(System.in);

		System.out.println("Enter an element: ");
		a = s.nextInt();

		int eFound = 0;
		for(int i : search)
		{
			if(a == search[i])
				eFound = 1;
		}
		if(eFound == 1)
		System.out.println("Entered value is Found in the defined array...");
		else
		System.out.println("Entered value is NOT Found in the defined array...");
	}
}