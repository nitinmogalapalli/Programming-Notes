// Program: ReadingUsingScanner.java
// Reads Data using a scanner class

import java.util.Scanner;

class ReadingUsingScanner
{
	public static void main(String args[])
	{
		Scanner forScan = new Scanner(System.in);
		
		int num1,num2;
		System.out.println("Enter Two Numbers: ");
		num1 = forScan.nextInt();
		num2 = forScan.nextInt();

		System.out.println("Numbers You Enterd are: \n" + num1 + "  " + num2);
	}
}