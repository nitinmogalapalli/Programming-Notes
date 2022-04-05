// Exception Handling in throws
class BException
{
		public void throwException() throws NullPointerException
	{
		System.out.println("This Method is going to throw Exception");
		throw new NullPointerException();
	}
}
 class ExceptionHandling3
{
		public static void main(String args[])
	{
	try
	{
		BException be=new BException();
		be.throwException();
	}
		catch(Exception e)
	{
		System.out.println("The message:"+e);
	}
		System.out.println("\n this main method has Exception handling");
	}
}