// progragram to find the uses of final keyword
class A
{
int i,j;
A()
{
i=j=-1;
}
final void setValues(int ival,int jval)
{
i=ival;
j=jval;
}
}
class B extends A
{
void show()
{
System.out.println("The  i and j values are:"+i+","+j);
}
}
class FinalTwouses
{
public static void main(String []args)
{
B b=new B();
b.show();
b.i=20;
b.j=31;

b.show();
b.setValues(21,32);
}
}
 