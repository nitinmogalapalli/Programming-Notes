//file:inheritence.java

class Box
{
  int a,b,c;
 
void get(int x,int y)
   {
   a=x;
   b=y;
   }
int sum()
 {
  int s=a+b;
return s;
  //System.out.println("sum of numbers is"+s);
  }
}



class Box1 extends Box
{
 int y;
void get1(int x,int y,int z)
  {
// a=x;
 //b=y;
get(x,y); 
c=z;
 }
void sum1()
{
int s;
s=a+b+c;
System.out.println("sum of numbers at box 1 is"+s);
}
 
}



 class Box2 extends Box
 {
void area()
    {
//int area;
//area=a*b;
System.out.println("area of rectangle is"+a*b);
    }
  }







class Box4 extends Box2
 {
  void sub()
 {
int k;
  if(a>b)
 k=a-b;
else
k=b-a;
  System.out.println("subtraction is"+k);
  }
}
/*

class Box4 Inheritances
 {
  void sub()
 {
int k;
  if(a>b)
 k=a-b;
else
k=b-a;
  System.out.println("subtraction is"+k);
  }
}
*/


class Inheritances extends Box2
{
  public static void main(String ags[])
{
 Box1 b1=new Box1();
//b1.get(2,3);
 b1.a=2;
 b1.b=4;

System.out.println("sum is"+ b1.sum());
b1.get1(2,8,4);
b1.sum1();
Box2 b2=new Box2();
b2.get(5,7);
b2.area();

Box4 b4=new Box4();
b4.get(5,9);
b4.sub();

 }

}