// program to find the this.number
class Box
{
private double d$length,d$width,d$hight;
private int i$length,i$width,i$hight;
Box()
{
d$length=d$width=d$hight=2;
i$length=i$width=i$hight=2;
}
void setvalues(double length,double width)
{
this.d$length=length;
this.d$width=width;
} 
void setvalues(double length,double width,double hight)
{
this.d$length=length;
this.d$width=width;
this.d$hight=hight;
}
void setvalues(int length,int width)
{
this.i$length=length;
this.i$width=width;
}
void setvalues(int length,int width,int hight)
{
this.i$length=length;
this.i$width=width;
this.i$hight=hight;
}
void d$area()
{
System.out.println("The area double:"+d$length*d$width);
}
void d$volume()
{
System.out.println("The volume of double:"+d$length*d$width*d$hight);
}
void i$area()
{
System.out.println("The area of integers:"+i$length*i$width);
}
void i$volume()
{
System.out.println("The volume of double:"+i$length*i$width*i$hight);
}
}
class ThisDemo2
{
public static void main(String args[])
{
Box b1=new Box();
b1.d$area();
b1.d$volume();
b1.i$area();
b1.i$volume();

b1.setvalues(2.5,3.5);
b1.setvalues(2.2,3.4,5.6);
b1.d$area();
b1.d$volume();
b1.setvalues(2,5);
b1.i$area();
b1.setvalues(3,4,8);
b1.i$volume();
}
}
