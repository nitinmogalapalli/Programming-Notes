// program to find the exception handling
class ExceptionExample2
{
	public static void main(String args[])
	{
		int num1,num2;
		try
		{
			num1=Integer.parseInt(args[0]);
			num2=Integer.parseInt(args[1]);
			System.out.println("Addition is:"+(num1+num2));
			System.out.println("Division          is:"+(num1/num2));
		}
		catch(ArithmeticException ae)
		{
			System.out.println("you entered a zero as secound integer");
		}
		catch(NumberFormatException nfe)
		{
			System.out.println("you entered a non integer");
		}
		System.out.println("Run again and enter two valid integers");
	}	
}
                                                                                                                                                                                                                                                                                                                                                                                                                  