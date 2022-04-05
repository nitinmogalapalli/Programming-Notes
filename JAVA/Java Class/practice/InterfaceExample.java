interface AddTwo
{
int a=4,b=6;
void addTwoMethod();
}
interface AddThree extends AddTwo
{
int c=10,d=15,v=32;
void addThreeMethod();
}
class ClassInterface implements AddTwo,AddThree
{
public void addTwoMethod()
{
System.out.println("The addition is:"+(a+b));
}
public void addThreeMethod()
{
System.out.println("The addition is:"+(c+d+v));
}
}
class InterfaceExample
{
public static void main(String args[])
{
ClassInterface ci=new ClassInterface();
ci.addTwoMethod();
ci.addThreeMethod();
}
}