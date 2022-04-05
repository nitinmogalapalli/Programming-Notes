// using this keyword

/*
	this keyword represents the current invoking object
	we can access the members by the statement "this.member"
*/

class Box
{
	double length, width, height;
	Box()
	{
		length = width = height = 2;
	}
	void setValues(double length,double width,double height)	
	{
		this.length = length;
		this.width = width;
		this.height = height;
	}

	void volume()
	{
		System.out.println("The volume is : " + length*width*height);
	}

}

class ThisDemo
{
	public static void main(String args[])
	{
		Box b1 = new Box();
		b1.volume();

		b1.setValues(12,5,8);
/*		b1.volume();

		Box b2 = new Box();
		b2.volume();

		b2.setValues(5,5,5);
		b2.volume();
*/
		
	}
}