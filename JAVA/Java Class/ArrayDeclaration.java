// program to understand the concept of arrays

//File: ArrayDeclaration.java

class ArrayDeclaration
{
	public static void main(String args[])
	{
		int iVarArray[];
		iVarArray = new int[10];

		iVarArray[0] = 2;
		iVarArray[1] = 6;

		System.out.println("The two values you assigned to iVarArray are: \n" + "iVarArray[0] -> " + iVarArray[0] + "\niVarArray[1] -> " + iVarArray[1]); 
	}
}