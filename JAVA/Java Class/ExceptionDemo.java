// program to understand the Exception

// File: ExceptionDemo.java

class ExceptionDemo
{
	public static void main(String args[]) // throws ArithmeticException
	{
		int a = 6 , b = 0;

		try
		{
			b = Integer.parseInt(args[0]);
			a = a / b;
		}
/*
		catch(ArrayIndexOutOfBoundsException aioob)
		{
			System.out.println(aioob.getMessage());
			System.out.println("Please Enter any value at the time of running this program(a Non Zero value)...");
		}

		catch(NumberFormatException nfe)
		{
			System.out.println("Message: " + nfe.getMessage());
			System.out.println("Not a Valid Integer... Please enter Integer value...!");
		}


		catch(ArithmeticException ae)
		{
			System.out.println("Message: " + ae.getMessage());
			System.out.println("You Entered a wrong integer value...\nTry another");
		}
*/

		catch( Exception e)
		{
			System.out.println("Message: " + e.getMessage() );
		}

//		a = a / b;
		System.out.println("The value in a is: " + a);
	}
}