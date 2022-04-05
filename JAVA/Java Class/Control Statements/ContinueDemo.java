// program to understand the Continue statement

// File: ContinueDemo.java

class ContinueDemo
{
	public static void main(String args[])
	{
		int i = 0;

		L1:for(int j = 0; j < 5; j++)
		{
			L2: for(int k = 0; k < 5; k++)
			{
				L3: for(int l = 0; l<5; l++)
				{
					if(l == 3)
					continue L1;
				    System.out.print(l + " ");
				}
				System.out.println();
			}
			System.out.println();
		}
		System.out.println("Out of L1...");
	}
}