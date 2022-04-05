// program to find a box
class Box
{
double length,width;
void area()
{
System.out.println("The area is:" +length*width);
}
}
class BoxDemo
{
public static void main(String args[])
{
Box b=new Box();
b.length=10;
b.width=12;
b.area();
}
}