package P1;
// Save this in Derived.java file

public class Derived extends Protection
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
