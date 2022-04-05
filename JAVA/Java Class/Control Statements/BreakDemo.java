/* break statement:
   a. It can be used to break the loop
   b. It can be used to break the selection process in the Select Statement
   c. It also used to jump out of the nested blocks */

class BreakDemo
{
	public static void main(String args[])
	{
		
	{
		B1:
		{
		System.out.println("Start of B1 block");
			B2:
			{
		System.out.println("Start of B2 block");
				B3:
				{
		System.out.println("Start of B3 block");
				break B3;
				}
			}
		}
		System.out.println("End of B1 block");
	}
	System.out.println("End of all Blocks");
	}
}