package P1;
// save this class as SomeOther.java

public class SomeOther
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

