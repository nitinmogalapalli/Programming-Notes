// Excetption Handling

/*

	Exception: is a run time error occured during the running of a program. When an exception occurs the program will be terminated/stops running.

	Exceptions can be different types.
	1. RunTimeException
	2. Exception (Checked)
	3. Errors

Every class that we use/write is a sub class of "Object" class. All the Exceptions are the sub classes of Class Throwable.

	Throwable class has two sub classes, one of them is Exception: It is the class that defines/sub classed by other classes (which inturn treated as exceptions ) which are "checked" and "Runtime Exceptions".

Error: There are some errors that could not be handled by the system/program. 

There must be a handling mechanism for exceptions those allowing abnormal termination of the program.

	Exception handling:	
	1. It is a concept of handling the abnormal termination of the program.
	2. Exception handling can be done Using these keywords
		try, catch, finally, throw, throws

Rules:

	try:
	      This is a block of statements which cause/ which are going to throw Exceptions.

	Syntax:
		try
		{
		
			// Block of statements which cause Exception
		}

	catch:
	     This also a block of statements which handles the exception.

	Syntax:
		catch(ExceptionType ObjRef)
		{
			// Instructions that shows information about the Exception catched here.
		}

	finally:
	    This is also a block of statements which are executed after all try and catch blocks were executed.

	Syntax:
		finally
		{
			// The statements that are executed after all try and catch blocks were completed.
		}

	throw:
	    This is a keyword, used to throw your own(user defined ) exceptions.

	Syntax:
		throw new ExceptionTypeClass();

	throws:
	    This keyword is used to specify inability of handling the exception by a method which causes the exception without having the handling mechanism.
	
	Syntax:
		return_type method_name(params) throws ExceptionName1,EXceptionName2,.....
*/

class ExceptionExample
{
	public static void main(String args[])
	{
		int num1,num2;

	try
	{
		num1 = Integer.parseInt(args[0]);
		num2 = Integer.parseInt(args[1]);

		System.out.println("Addition is : " + (num1 + num2));
		System.out.println("Division is : " + (num1/num2));

	}
	catch(ArithmeticException ae)
	{
		System.out.println("You Entered a zero as second integer..\nError is : ");

	System.out.println("Run again and enter two valid integers..");
	}


	catch(NumberFormatException nfe)
	{
		System.out.println("You Entered a non integer...\nPlease try with integer values...");
	}


	
	}
}