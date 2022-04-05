//File:Arith.java
import java.lang.*;

class Arithmatic
	  {
	int a,b,c;
	 Arithmatic()
 	  {
	   a=b=c=0;
	 }
	 void set(int x,int y,int z)
	  {
 	 a=x;
	  b=y;
	  c=z;
 
	  }
	void dis()
	 {
	  System.out.println("valiues of a,b,c, are"+a+" "+b+" "+c);
	  } 
	 }
 
class Addition extends Arithmatic
{
int a,b,c;
 void Add()
{

System.out.println("sum of a,b,c, is:"+(super.a+super.b+super.c));
 }
}

class Subtraction extends Arithmatic
 {

 void sub()
	 {
  	if(a>b)
	{
		if(b>c)

		System.out.println("subtraction is:"+(a-b-c));
		else//c>b

		System.out.println("subtraction is :"+(c-a-b));
	}
	else  //b>a
	{
		if(a>c)
		System.out.println("sub is"+(b-a-c));
		else  //c>a
		{
			if(b>c)
			System.out.println("sub is"+(b-c-a));
			else
			System.out.println("sub is"+(c-b-a));
		}
	}
	}} 


class Inherit
{
 public static void main(String ar[])
{
 
Addition a1=new Addition();
a1.Add();
a1.set(2,8,1);
a1.dis();
a1.Add();
Subtraction s1=new Subtraction();
s1.sub();
s1.set(64,28,75);
 s1.sub();
}
}