// Exception Handling

class BException
{
	public void throwException() throws NullPointerException, ArithmeticException
	{
		System.out.println("This Method is going to Throw Exception...\n");
		
		NullPointerException npe = new NullPointerException();
		ArithmeticException ae = new ArithmeticException();
		NumberFormatException nfe = new NumberFormatException();

//		throw npe;
//		throw ae;
		throw nfe;
//		System.out.println("Yes..");
	}
}

class ExceptionHandling
{
	public static void main(String args[])
	{
		try
		{ 
			BException be = new BException();
	
			be.throwException();

		}

		catch(NullPointerException npe)
		{
			System.out.println("The Message: : " + npe);
		} 
		catch(ArithmeticException ae)
		{
			System.out.println("The Message: : " + ae);
		}
		catch(Exception e)
		{
			System.out.println("The Message: : " + e);
		}
		finally
		{
			System.out.println("This Message given from Finally Block...\n");
		}

	}

}