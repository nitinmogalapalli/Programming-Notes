// program to understand the usage of arrays

import java.util.*;

class ArrayUsage
{
	public static void main(String args[])
	{
		int[] sumArray = new int[30];
		
		int i,total=0;
		//Reading values in to the array
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter How Many numbers you want to enter: ");
		int elements = sc.nextInt();
		System.out.println("Enter " + elements + " Values to calculate total..");
		for( i =0; i<elements ; i++)
		{
			sumArray[i] = sc.nextInt();
			total += sumArray[i];
		}
		
		System.out.print("The total of the given numbers is: " + total);


	}
}