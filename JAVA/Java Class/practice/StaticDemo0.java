// program to find static
class Box
{
static void area()
{
System.out.println("The area is:"+length*width);
}
static void volume()
{
System.out.println("The volume is:"+length*width*hight);
}
}
class StaticDemo0
{
public static void main(String args[])
{
Box.length=2;
Box.width=3;
Box.hight=6;
Box.area();
Box.volume();
Box.setvalues(5,5,5);
Box.area();
Box.volume();
}
}