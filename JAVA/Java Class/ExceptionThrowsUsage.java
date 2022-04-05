// program to understand the exception handling with multiple catch blocks

// File: ExceptionWithMultipleCatchs.java

import java.util.*;

public class ExceptionThrowsUsage
{
	public void mine() throws ArithmeticException, InputMismatchException
	{
		int i1, i2;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter Two integer values to work with this...");
		i1 = sc.nextInt();
		i2 = sc.nextInt();
		i1 = i1 / i2;

		System.out.println("So please do concentrate on handling of Exceptions...");


	}
}

class ExceptionThrowsDemo
{
	public static void main(String args[])
	{
		ExceptionThrowsUsage etu = new ExceptionThrowsUsage();
		try
		{	
			etu.mine();
		}
		catch(Exception e)
		{
			System.out.println("The Exception thrown by the method \" mine() \" \nand the exception is: " + e.toString());
			
		}
	}
}