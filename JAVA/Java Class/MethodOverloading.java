// Method overloading

/* 
Methods sharing the same name with different parameters and their types
	this concept is called as the method overloading

overloaded methods should:
	method names can be same
	count of the method parameters should be differ
			(or/and)
	the type of the parameter should be differ
*/

class Box
{
	double d_length, d_breadth, d_height;
	int i_length , i_breadth, i_height;
	
	Box()
	{
		d_length = d_breadth = d_height = -1;
		i_length = i_breadth = i_height = -1;
	}
	
	void setValues(int i_l, int i_b, int i_h)
	{
		this.i_length = i_l;
		this.i_breadth = i_b;
		this.i_height = i_h;
	}
	
	void setValues(double d_l, double d_b, double d_h)
	{
		this.d_length = d_l;
		this.d_breadth = d_b;
		this.d_height = d_h;
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

class MethodOverloading
{
	public static void main(String args[])
	{
		Box b1 = new Box();
		System.out.println("The volume of the integer and double for b1: ");		

		System.out.println("Integer: " + b1.i_volume());

		System.out.println("Double: "+b1.d_volume());

		System.out.println("The volume of the integer and double for b1(with different values): ");
		b1.setValues(4,3,2);
		b1.setValues(3.0,2.0,4.0);

		System.out.println("The volume of the Integer: " + b1.i_volume());

		System.out.println("The volume of the Double: " + b1.d_volume());
		
	}
}
