class Outer
{
 static int i_o=10;
void display1()
{
System.out.println("outer i_o: "+i_o);
}
static void display2()
{
  
  display1();
  System.out.println("inner i_o: " + i_o);
}
public static void main(String args[])
{
 Outer o=new Outer();
 o.display2();
}
}

/*class NestedClass
{
public static void main(String args[])
{
Outer obj=new Outer();
obj.display();
Outer.Inner oi = new Outer.Inner();
oi.display();
}
}*/