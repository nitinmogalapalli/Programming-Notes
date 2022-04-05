//program to declare an array and initialize it.

//File: ArrayInitialization.java

class ArrayInitialization
{
	public static void main(String args[])
	{
		double dVarA[] = {4,6,9.0,70};

		double sum = dVarA[0] + dVarA[1] + dVarA[2] + dVarA[3];
		System.out.println("The Values in the Array are: \n" + "dVarA[0] -> " + dVarA[0] + "\ndVarA[1] -> " + dVarA[1] + "\ndVarA[2] -> " + dVarA[2] + "\ndVarA[3] -> " + dVarA[3]);
	
		System.out.println("The sum of array values is: " + sum);

		System.out.println("The size of array is: " +dVarA.length);

	}
}