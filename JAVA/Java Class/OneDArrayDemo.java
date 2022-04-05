/* program to read 10 values to the one-dimentional array and print them */

import java.util.*;

class OneDArrayDemo
{
	public static void main(String arg[])
	{
		int elements[],i;
		elements = new int[10];
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter 10 Values to the Array");
		for(i=0;i<10;i++)
			elements[i] = sc.nextInt();
		
		System.out.println("You entered:");
		for(i=0;i<10;i++)
		System.out.print(elements[i] + "  ");
	}
}