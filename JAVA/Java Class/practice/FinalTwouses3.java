// program to find the uese of final keyword
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
}
class B
{
int p,r;
B()
{
p=r=-2;
}
void setValues(int pval,int rval)
{
p=pval;
r=rval;
}
void show()
{
System.out.println("The p and r values are:"+p+","+r);
}
}
class FinalTwouses3
{
public static void main(String []args)
{
 B b=new B();
b.show();
b.p=20;
b.r=15;

b.show();
b.setValues(54,69);
}
}

