// program to find the accessSpecifers
class Box
{
protected static double length,width,hight;
Box()
{
length=2;
width=5;
hight=6;
}
void setvalues (double l,double w,double h)
{
length=l;
width=w;
hight=h;
}
void area()
{
System.out.println("area is:"+length*width);
}
void volume()
{
System.out.println("volume is:"+length*width*hight);
}
}
class AccessSpecifier2
{
public static void main(String args[])
{
Box b=new Box();
b.area();
b.volume();

Box b1=new Box();
b1.setvalues(2,3,6);
 b1.length = 12;
b1.width=5;
b1.hight=3;
b1.area();
b1.volume();
}
}
