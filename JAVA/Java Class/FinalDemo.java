// Program to understand the final keyword

/*
	final ,first use:
		It is a keyword used to define constnats that can not be changed in the program.
*/
class FinalDemo
{
	public static void main(String args[])
	{
		final int var1 = 20;
		int var2 = 25;
		System.out.println("The value of the Final variable is : " + var1);
		System.out.println("The value of the Normal variable is: " + var2);

		//var1 = 50; Error assign a value to final var1
		var2 = 65;

		System.out.println("The value of the Final variable is " + var1);
		System.out.println("The value of the Normal variable after changing value is : " + var2);
	}
}