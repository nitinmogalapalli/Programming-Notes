// program to find constructers
class Box
{
double length,width,hight;
Box()
{
length=3;
width=6;
hight=5;
}
double area()
{
return length*width;
}
double volume()
{
return length*width*hight;
}
}
class BoxDemo9
{
public static void main(String args[])
{
Box b=new Box();
System.out.println("The area is:"+b.area() +"The volume is:"+b.volume());
}
} 