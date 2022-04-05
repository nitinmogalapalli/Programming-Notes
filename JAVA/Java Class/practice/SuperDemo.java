// program to find the uses of super keyword
class Example1
{
	int i,j;
	Example1()
	{
	i=10;
	j=20;
	}
}
class Example2 extends Example1
{
	int i;
	Example2()
	{
	i=50;
	super.i=505;
	}
	void show()
	{
		System.out.println("The i values: \nIn super: " + super.i + "\nIn sub: " + i);
	}
}
class SuperDemo
{

	public static void main(String args[])
	{
		Example2 ex=new Example2();
		ex.show();
	}
}