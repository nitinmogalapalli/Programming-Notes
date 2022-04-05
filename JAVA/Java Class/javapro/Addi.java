//File:addition.java
import java.lang.*;
import  java.util.*;

class Add
  {
  int a,b,c;
Add()
{
a=1;
b=8;
}

Add(int aa,int bb)
{
a=aa;
b=bb;
}
int set()
{
c=a+b;
return c;
 }

}

class Addi
{
 public static void main(String args[])
{
Add ad=new Add(6,7);
//Add(2,4);

System.out.println("Sum of given numbers is :"+ad.set());

Add f=new Add(2,4);
System.out.println("Sum of given numbers is :"+f.set());

}
}