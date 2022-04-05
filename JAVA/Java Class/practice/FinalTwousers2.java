// program to find the users of final keyword
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
int i,j;
void setvalues(int ii,int jj)
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
pulic static void main(String args[])
{
B b=new B();
b.show();
b.i=5;
b.j=6;
b.show();
}
}
