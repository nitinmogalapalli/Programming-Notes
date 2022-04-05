// program to find the methodoverriding
class A
{
int i,f;
A()
{
i=2;
f=5;
}
void show()
{
System.out.println("The values in A is:"+i+","+f);
}
}
class B extends A
{
double d;
B()
{
d=21.3;
}
void show()
{
System.out.println("The value in B is:"+d);
}
}
class MethodOverriding2
{
public static void main(String[] args)
{
A ob1=new A();
ob1.show();
B ob2=new B();
ob2.show();
}
}
