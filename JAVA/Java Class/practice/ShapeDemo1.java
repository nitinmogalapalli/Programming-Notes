// program to find the some shape
class Shape
{
double length,width,height;
Shape()
{
length=width=height=2;
}
void setValues(double length,double width)
{
this.length=length;
this.width=width;
}
void setValues(double length,double width,double height)
{
this.length=length;
this.width=width;
this.height=height;
}
}
class Triangle extends Shape
{
void tri_area()
{
System.out.println("the Triangle area is:"+length*width);
}
}
class Cube extends Shape
{
void cube_setValues(double a)
{
length=width=height=a;
}
void cube_area()
{
System.out.println("The cube area is:"+length*width);
}
void cube_volume()
{
System.out.println("The cube volume is:"+length*width*height);
}
}
class ShapeDemo1
{
public static void main(String args[])
{
Triangle tri=new Triangle();
tri.setValues(2.4,5.6);
tri.tri_area();

Cube cb=new Cube();
cb.cube_setValues(2.2);
cb.cube_area();
cb.cube_volume();
}
}