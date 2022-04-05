// Exception handling in finally
class BException
{
public void throwException() throws NullPointerException
{
System.out.println("this method is going to throw Exception...\n");
NullPointerException npe=new NullPointerException();
throw npe;
//System.out.println("yes");
}
}
class ExceptionHandling4
{
public static void main(String args[])
{
try
{
BException be=new BException();
be.throwException();
}
catch(ArithmeticException ae)
{
System.out.println("The message:"+ae);
}
finally
{
System.out.println("this message given from finally block.....\n"); 
}
}
}                                                                                