// Assigning Objects
// A box class
class Box
{
double length,width,hight;

void area()
{
System.out.println("The area is:" + length*width);
}
double Volume()
{
//System.out.println("The volume is:" +length*width*hight);
return length*width*hight;
}
}
class BoxDemo1
{
public static void main(String args[])
{

Box b1,b2;
// Initializing b1 with some memory
b1 = new Box();

b1.length=10;
b1.width=10;
b1.hight=12;

b1.area();
System.out.println("The Volume of the Box b1 is : " +b1.Volume());
// assigning b1 memory to b2
b2 =  b1;

b2.length = 20;
b2.width = 20;

b2.area();

b2.hight = 22;
System.out.println("The Volume of the Box b2 is :  " + b2.Volume());

}
}