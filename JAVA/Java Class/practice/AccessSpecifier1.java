// program to find Access specifiers
class Box
{
private double length,width,hight;
Box()
{
length=width=hight=2;
}
void setvalues(double l,double w,double h)
{
length=l;
width=w;
hight=h;
}
void area()
{
System.out.println("The area is:"+length*width);
}
void volume()
{
System.out.println("The volume is:"+length*width*hight);
}
}
class AccessSpecifier1
{
public static void main(String args[])
{
Box b1=new Box();
b1.area();
b1.volume();
Box b2=new Box();
b2.setvalues(12,2,3);
b2.area();
b2.volume();
}
}