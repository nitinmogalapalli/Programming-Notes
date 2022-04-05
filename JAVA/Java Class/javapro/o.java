//File:Abstract.java
import java.lang.*;
import java.util.*;
abstract class box
    {
       int length,wight,hight;
 	box()
 	 {
	  length=wight=hight=1;
	  }

	abstract void height(int x);
 	abstract void weight();

  }

class Box1 extends box
{
  Box1(int a,int b,int c)
{
 length=a;
wight=b;
hight=c;
}
         

    void height(int x)
    {
 hight=x;
   System.out.println("height is:"+hight);
  }
  void  weight()
    {
  System.out.println("weight is:"+wight);
   }
}

class o
  {
 public static void main(String args[])
{

  Box1 b;

  b=new Box1(25,47,87);

  b.weight();
    b=new Box1(11 ,55,77);
//  b.height();
b.height(19);c
//b.weight();
b=new Box1(15,78,95);
 b.weight();
}
}

  