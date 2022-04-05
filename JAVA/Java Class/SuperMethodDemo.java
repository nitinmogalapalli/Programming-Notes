// super Method Demo

class Box
{
	double length,width,height;
	Box()
	{
		length = width = height = 0;
	}
	Box(double len)
	{
		length = width = height = len;
	}
	Box(double l,double w,double h)
	{
		this.length = l;
		this.width = w;
		this.height = h;
	}
}


class BoxWeight extends Box
{
	double weight;
	BoxWeight()
	{
		super();  //To call Default Super class constructor
//		Box();	Error: Can'n Find Symbol(Method)
 //		length = width = height = 0;

		weight = 0;
	}
	BoxWeight(double len,double wt)
	{
		super(len);
//		length = width = height = len;

		weight = wt;
	}

	BoxWeight(double l,double w,double h,double wt)
	{
		super(l,w,h);
//		length = l;
//		width = w;
//		height = h;
		weight = wt;
	}
	void area()
	{
		System.out.println("Area: " + length*width);
	}
	void volume()
	{
		System.out.println("Volume: " + length*width*height);
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
		BoxWeight defaultBW = new BoxWeight();

		System.out.println("The defaultBW object :");
		defaultBW.area();
		defaultBW.volume();
		defaultBW.showWeight();


		BoxWeight cube = new BoxWeight(2.4,7.0);
		System.out.println("The cube object :");
		cube.area();
		cube.volume();
		cube.showWeight();

		BoxWeight bw = new BoxWeight(2.2,3.3,4.4,52.9);
		System.out.println("The bw object :");		
		bw.area();
		bw.volume();	
		bw.showWeight();		
	}
}
