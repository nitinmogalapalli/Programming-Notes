

class MetOver
{
  void cal(int i,int j)
  {
     int k=i+j;
     System.out.println(k);
  }
  void cal(double a,double b)
  {
     double c=a+b;
     System.out.println(c);
  }
}
class Main
{
  public static void main(String ar[])
 {  
     MetOver m=new MetOver();
     m.cal(12,20);
     m.cal(12.12,20.45);
}
}