// program to super method demo
class Box
{
	  double length,width, height;
	Box()
 	{
  		length=width=height=1;
 	}
 	Box(double len)
 	{
 	 	length=width=height=len;
 	}
 	Box(double length,double width,double height)
 	{
  		this.length=length;
		this.width=width;
		this.height=height;
	}
}
class BoxWeight extends Box
{		
	double weight;
	BoxWeight()
	{
		super();
		weight=1;
	}
	BoxWeight(double len,double wt)
	{	
		super(len);
		weight=wt;
	}
	BoxWeight(double length,double width,double height,double wt)
	{	
		super(length,width,height);
		weight=wt;
	}
	void area()
	{
		System.out.println("The area:"+length*width);
	}
	void volume()
	{
		System.out.println("The volume:"+length*width*height);
	}
	void showweight()
	{
		System.out.println("The weight:"+weight);
	}
}
class SuperMethodDemo2
{
	public static void main(String[] args)
	{
		BoxWeight defualtBW=new BoxWeight();
		
		System.out.println("The defaultBW is:");
		defualtBW.area();
		defualtBW.volume();
		defualtBW.showweight();

 		BoxWeight cube=new BoxWeight(2.0,3.6);
		cube.area();
		cube.volume();
		cube.showweight();

		BoxWeight bw=new BoxWeight(2.3,5.4,8.2,52.2);
		bw.area();
		bw.volume();
		bw.showweight();
	}
}