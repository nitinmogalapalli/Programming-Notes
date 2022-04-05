// a protection class

package P1;

public class Protection
{
	int n = 25;
	private int n_pri = 35;
	protected int n_pro = 45;
	public int n_pub = 55;

	public Protection()
	{
		System.out.println("\nIn Protection Class: ");
		System.out.println("default n: " + n);
		System.out.println("private n_pri: " + n_pri);
		System.out.println("protected n_pro: " + n_pro);
		System.out.println("public n_pub: " + n_pub);
	}
}

class Derived extends Protection
{
	Derived()
	{
		System.out.println("\nIn Derived Class: ");
		System.out.println("default n: " + n);
//		System.out.println("private n_pri: " + n_pri);
		System.out.println("protected n_pro: " + n_pro);
		System.out.println("public n_pub: " + n_pub);
	}
}

class SomeOther
{
	SomeOther()
	{
		Protection p = new Protection();
		System.out.println("\nIn SomeOther Class: ");
		System.out.println("default n: " + p.n);
//		System.out.println("private n_pri: " + p.n_pri);
		System.out.println("protected n_pro: " + p.n_pro);
		System.out.println("public n_pub: " + p.n_pub);		
	}
}

class ProtectionDemo
{
	public static void main(String args[])
	{
//		Protection p = new Protection();

		Derived d = new Derived();

		SomeOther so = new SomeOther();
	}
}

