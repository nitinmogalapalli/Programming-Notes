//File:Staticprogram.java

/*import java.lang.*;
import java.util.*;

*/
 class abc
 {
     	static int a,b,c;
	   abc() 
  	{
	  	 a=b=c=1;
  	}

	void add()
	{
	System.out.println("sum of a,b,c is:"+(a+b+c));
	}
	
	void mult()
	{
	System.out.println("product of  of a,b,c is:"+(a*b*c));
	}
 }


class Staticpro
 {
  public static void main(String args[])
  {
   abc.add();
   abc.mult();
  abc a=new abc();
 a.add();
a.mult();
  } 
}
  	
 