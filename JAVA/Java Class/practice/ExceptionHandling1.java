// program to find throus
class BException
{
public void throwException()
{
try
{
throw new ArithmeticException();
}
catch(ArithmeticException ae)
{
System.out.println("The message:"+ae);
return;
}
}
}
class ExceptionHandling1
{
public static void main(String args[])
{
BException be=new BException();
be.throwException();
}
}