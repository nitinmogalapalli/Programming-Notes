// super Method Demo
class Box
{
	double length,breadth,height;
	Box()
	{
		length = breadth = height = 1;
	}
	Box(double len)
	{
		length = breadth = height = len;
	}
	Box(double l,double w,double h)
	{
		this.length = l;
		this.breadth = w;
		this.height = h;
	}
}


class BoxWeight extends Box
{
	double weight;
	BoxWeight()
	{
//		super();  //To call Default Super class constructor
//		Box();	Error: Can'n Find Symbol(Method)
//		length = breadth = height = 1;

		weight = 1;
	}
	BoxWeight(double wt)
	{
//		super(len);
//		length = breadth = height = len;

		weight = wt;
	}

/*	BoxWeight(double l,double w,double h,double wt)
	{
		super(l,w,h);
//		length = l;
//		breadth = w;
//		height = h;
		weight = wt;
	}*/
	void area()
	{
		System.out.println("Area: " + length*breadth);
	}
	void volume()
	{
		System.out.println("Volume: " + length*breadth*height);
	}

	void showWeight()
	{
		System.out.println("The Weight is : " + weight);
	}
}

class SuperMethodDemo
{
	public static void main(String args[])
	{
		/*BoxWeight defaultBW = new BoxWeight();

		System.out.println("The defaultBW object :");
		defaultBW.area();
		defaultBW.volume();
		defaultBW.showWeight();*/

                                  
		Box b = new Box(2.4);
		BoxWeight cube = new BoxWeight(7.0);
		System.out.println(cube.length );
		cube.area();
		cube.volume();
		cube.showWeight();

		/*BoxWeight bw = new BoxWeight(2.2,3.3,4.4,52.9);
		System.out.println("The bw object :");		
		bw.area();
		bw.volume();	
		bw.showWeight();	*/	
	}
}
