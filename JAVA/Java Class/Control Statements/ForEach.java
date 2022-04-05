// program to understand the For Each version of For loop Statement

//File: ForEach.java

import java.util.*;
class ForEach
{
	public static void main(String arg[])
	{
		int a;
		int iArr[] = {0, 1, 99 ,3 ,4, 5, 66, 7, 8, 9};
		
		Scanner input = new Scanner(System.in);

		System.out.println("Enter an element to search in an array: ");
		a = input.nextInt();

		// Repeat a loop that itereates the total elements in the collection
		int count = 0;
		for( int j : iArr)
		{
			if(a == i)
				count = 1;
		}
		if(count == 1)
		System.out.println("The Element you entered is Found...");
		else
		System.out.println("The Element you entered is NOT Found...");
	}
}