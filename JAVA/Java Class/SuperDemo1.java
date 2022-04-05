//super demo

class Example1
{
	int i,j;
	Example1()
	{
		i=j=-1;
	}
}
class Example2 extends Example1
{
	Example2()
	{
		i=100;
	}
	void changeSuper(int var)
	{
		super.i=var;
	}
	void show()
	{
		System.out.println("ex1 i ="+super.i+" ex1 j ="+super.j+" ex2 i ="+i);
	}
}
class SuperDemo1	
{
	public static void main(String args[])
	{
		Example1 e1 = new Example1();
		System.out.println(e1.i);
		Example2 e2= new Example2();
		e2.show();
		e2.changeSuper(99);
		e2.show();
	}
}