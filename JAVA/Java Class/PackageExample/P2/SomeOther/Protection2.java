//Protection2 class

package SomeOther;

import P1.*;

class Protection2 extends Protection
{
	Protection2()
	{
		System.out.println("In Protection2 Class: ");
//		System.out.println("default n: " + n);
//		System.out.println("private n_pri: " + n_pri);
		System.out.println("protected n_pro: " + n_pro);
		System.out.println("public n_pub: " + n_pub);
	}
}

class OtherPackage
{
	OtherPackage()
	{
		Protection p = new Protection();
		System.out.println("In OtherPackage Class: ");
//		System.out.println("default n: " + p.n);
//		System.out.println("private n_pri: " + p.n_pri);
//		System.out.println("protected n_pro: " + p.n_pro);
		System.out.println("public n_pub: " + p.n_pub);
	}
}

class DemoProtection
{
	public static void main(String args[])
	{
		Protection2 p2 = new Protection2();
		OtherPackage op = new OtherPackage();
	}
}