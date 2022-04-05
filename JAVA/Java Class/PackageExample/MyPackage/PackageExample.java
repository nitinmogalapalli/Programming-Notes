// Class in My Package


package MyPackage;

public class PackageExample
{
	public int a,b;
	public PackageExample()
	{
		a = 25;
		b = 45;
	}

	public void show()
	{
		System.out.println("The addition is: " + (a+b) );
	}
}

/*class Pack
{
	public static void main(String args[])
	{
		PackageExample pe = new PackageExample();

		pe.show();
	}
}
*/