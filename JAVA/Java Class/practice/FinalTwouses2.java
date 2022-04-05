// program to find the users of final keyword
final class A
{
int i,j;
A()
{
i=j=-1;
}
void setValues(int ival,int jval)
{
i=ival;
j=jval;
}
void show()
{
System.out.println("The i and j values are:"+i+","+j);
}
}
class B 
{
int i,j;
void setValues(int ii,int jj)
{
i=ii;
j=jj;
}
void show()
{
System.out.println("The i and j values are:"+i+","+j);
}
}
class FinalTwouses2
{
public static void main(String args[])
{                                                                                          
A a=new A();
a. show();
a.setValues(2,3);
a.show();

B b=new B();
b.show();
b.i=5;
b.j=6;
b.show();
}
}