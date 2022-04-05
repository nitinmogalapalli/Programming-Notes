// program to understand the exception handling by defining a userdefined exception class

// File: ExceptionUserDefined.java

import java.util.*;
import java.lang.*;

class InsufficientBalanceException extends Exception
{
	double balance;

	InsufficientBalanceException()
	{
		super("Require some amount");
	}
	InsufficientBalanceException(double amount)
	{
		super("Require some amount");
		balance = amount;
	}

	double getBalance()
	{
		return balance;
	}
}



class BankAccount
{
	public double account, balance, amount;

	BankAccount(int a)
	{
		account = a;
		System.out.println("Your account number "+account+" is created.");
	}
	
	void deposit()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the amount you want to deposit");
		balance = balance + sc.nextDouble();
		System.out.println(balance + " deposited in the account\n");
	}

	void withDraw() throws  InsufficientBalanceException
	{	
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the amount to be withdrawn");
		amount = sc.nextDouble();
		if(balance >= amount)
		{
			balance -= amount;
			System.out.println(amount + " withdrawn from the account...");
			System.out.println("The remaining balance is: " + balance);
		}
		else
		{
			InsufficientBalanceException ibe = new InsufficientBalanceException(amount-balance);
			System.out.println("insufficient balance ...\nYou Require " + ibe.getBalance() + " more in your account");
			throw ibe;
		}
	}
		
}

public class ExceptionUserDefined
{
	public static void main(String args[])
	{
		BankAccount ba = new BankAccount(324);
		ba.deposit();
		try
		{
			ba.withDraw();
			ba.withDraw();
		}
		catch(Exception e)
		{
			System.out.println("Exception ..." + e);
		}

	System.out.println("So please do concentrate on handling of Exceptions...");


	}
}
