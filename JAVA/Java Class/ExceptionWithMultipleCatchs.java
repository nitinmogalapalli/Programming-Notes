// program to understand the exception handling with multiple catch blocks

// File: ExceptionWithMultipleCatchs.java

public class ExceptionWithMultipleCatchs
{
	public static void main(String args[])
	{
		int i1, i2;

		try
		{
			i1 = Integer.parseInt(args[0]);
			i2 = Integer.parseInt(args[1]);

			i1 = i1 / i2;
			
		}
		catch(ArithmeticException ae)
		{
			System.out.println("The ae exception: " + ae.getMessage());
		}
		catch(ArrayIndexOutOfBoundsException aiobe)
		{
			System.out.println("The AIOBE exception: " + aiobe.getMessage());
		}
		catch(NumberFormatException nfe)
		{
			System.out.println("The NFE exception: " + nfe.getMessage());
		}
		

		System.out.println("So please do concentrate on handling of Exceptions...");
	}
}