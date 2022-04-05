// program to find the constructors with parameters
class Box
{
double length,width,hight;
Box(double l,double w,double h)
{
length=l;
width=w;
hight=h;
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
class BoxDemo$
{
public static void main(String args[])
{
Box b1=new Box(1,2,3);
System.out.println("The area is:"+b1.area()+"the volume is:"+b1.volume());
}
}