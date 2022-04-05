// Example program to understand the constructor
// File: ConstructorDemo.java
class Cube
{
double length, breadth, height;
Cube()
{
 length=2;
 breadth=2;
 height=2;
}
double volume()
{
return length*breadth*height;
}
}
class ConsDemo
{
public static void main(String args[])
{
Cube c=new Cube();
double v=c.volume();
System.out.println("volulme of the box is :"+v);
}
}
