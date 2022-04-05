//File Name: DataReadingUsingScanner.java
/* program to read data using Scanner Class */

import java.util.*;
import java.lang.*;

class DataReadingUsingScanner
{
	public static void main(String args[])
	{
		Scanner s_input = new Scanner(System.in);

		int a,b;
		System.out.println("Enter Two Integer values:");
		a = s_input.nextInt();
		b = s_input.nextInt();

		System.out.println("The Values You entered are: \na : " + a + "\nb : " + b);

	}
}