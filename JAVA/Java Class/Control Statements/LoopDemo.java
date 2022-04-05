/* Looping Statements Syntaxs:
	1. while
		intitialization statements;
		while(condition)
		{
			statements to be iterated;
			increment/decrement;
		}
	2. do-while
		do
		{
			statements to be iterated;
			increment/decrement;
		}while(condition);
	3. for
		for(intialization; Condition; incre/decre)
		{
			statements;
		}

		a. for(;condition;incre/decre)
		   {
		   }
		b. for(; ;increment/decrement)
		   {
			condition statements should be declared here;
		   }
		c. for(; ; ;)
		   {
			[initilization];
			condition and/or incre/decre;
		   }
	4. for-each
		for(var : collection)
		{
			statements;
		}
*/

// program to print numbers from 1 to 10
class LoopDemo
{
	public static void main(String args[])
	{
		int iNum = 1;

		while(iNum <= 10)
		{
			System.out.print(iNum + "  ");
			iNum = iNum +1; //iNum++;
		}

		/*
		do
		{
			System.out.print(iNum + "  ");
			iNum = iNum + 1;
		}while(iNum <= 10);
		*/

		/*
		for(;iNum <= 10; iNum++)
			System.out.print(iNum + "  ");
		*/
	}
}