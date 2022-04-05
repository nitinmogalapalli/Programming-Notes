// constructors overloading

/*
Overloaded Constructors:
	they share same name as the class name,
	they must differ in the count of the parameters list,
			(or/and)
	they must differ in the type of the parameters list.

*/

class Box
{
	double d_length, d_breadth, d_height;
	int i_length, i_breadth, i_height;

	Box()  	//Default Constructor
	{
		d_length = d_breadth = d_height = -1;
		i_length = i_breadth = i_height = -1;
	}

	Box(int i_l, int i_b, int i_h) //Constructor with int param
	{
		this.i_length = i_l;
		this.i_breadth = i_b;
		this.i_height = i_h;
	}
	Box(double d_l, double d_b, double d_h) //Constructor with double param
	{
		this.d_length = d_l;
		this.d_breadth = d_b;
		this.d_height = d_h;
	}

	void setValues(double d_l,double d_b,double d_h)  // method with double param
	{
		d_length = d_l;
		d_breadth = d_b;
		d_height = d_h;
	}

	void setValues(int i_l, int i_b, int i_h) // method with int param
	{
		i_length = i_l;
		i_breadth = i_b;
		i_height = i_h;
	}

	int i_volume()
	{

		return i_length*i_breadth*i_height;
//		System.out.println("The volume of the Integers: " + i_length*i_breadth*i_height);
	}

	
	double d_volume()
	{
		return d_length*d_breadth*d_height;

//		System.out.println("The volume of the Double: " + d_length*d_breadth*d_height);

	}
}


class ConstructorOverloading
{
	public static void main(String args[])
	{
		Box b1;
		b1 = new Box(2,3,4);
		System.out.println("The volume of the Integer: " + b1.i_volume());

		b1 = new Box(4.5,5.5,6.5);
		System.out.println("The volume of the Double: " + b1.d_volume());
                                  b1.setValues(1,2,3);
                                  System.out.println("The volume of the Integer: " + b1.i_volume());
                                  b1.setValues(1,2,3.0);
                                  System.out.println("The volume of the Double: " + b1.d_volume());
	}
}