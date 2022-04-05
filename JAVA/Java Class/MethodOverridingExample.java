// program to illustrate the method overriding concept with wide example...

// file: MethodOverridingExample.java

class TwoDFigure
{
	double dim1, dim2;

	TwoDFigure()
	{
		dim1 = -1;
		dim2 = -1;
	}

	TwoDFigure(double d1, double d2)
	{
		dim1 = d1;
		dim2 = d2;
	}

	double area()
	{
		System.out.println("From Figure area Method: ");
		return 0;
	}
}

class RectangleFigure extends TwoDFigure
{
	RectangleFigure()
	{
		super();
	}
	
	RectangleFigure(double d1, double d2)	
	{
		super(d1,d2);
	}

	double area()
	{	
		System.out.println("From RectangleFigure area Method: ");
		return dim1*dim2;
	}

}

class TriangleFigure extends TwoDFigure
{
	TriangleFigure()
	{
		super();
	}

	TriangleFigure(double d1, double d2)
	{
		super(d1, d2);
	}

	double area()
	{
		System.out.println("From TriangleFigure area Method: ");
		return (dim1*dim2)*0.5;
	}

}

class MethodOverridingExample
{
	public static void main(String args[])
	{
		TwoDFigure tdf = new TwoDFigure();
		System.out.println(tdf.area());

		RectangleFigure rf = new RectangleFigure(2,3);
		System.out.println(rf.area());

		TriangleFigure tf = new TriangleFigure(10,5);
		System.out.println(tf.area());
	}
}