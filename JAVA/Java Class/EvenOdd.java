/* program to find the given number even or odd */

import java.lang.*;
import java.util.*;

class EvenOdd
{
	public static void main(String args[])
	{
		int n;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number to find whether it is even or odd...");
		n = sc.nextInt();
		if(n%2==0)
			System.out.println("The no. is Even:");
		else
			System.out.println("The no. is Odd:");
	}
}