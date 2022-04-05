// File:Addition
import pack.PackageArithmatic;
//package javapro;

class Add extends PackageArithmatic
   {
   int sum;
  void Sum1()
  {
   int sum;
   sum=a+b;
  System.out.println("values of sum of a and b are "+(sum));
   }
}

public class Addition
{
  public static void main(String args[])
 {
// PackageArithmatic p1=new PackageArithmatic();
 Add a=new Add();
  a.Sum1();
  } 
 }