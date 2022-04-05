/* simple if:
	Syntax:	if(Condition) // block executes when the condition is true
		{
		  Set of statments;
		}

    if-else:
	Syntax:	if(Condition)
		{
		  Set of statements for condition true;
		}
		else
		{
		  Set of statements for condition false;
		}
*/

/* program to illustrate selection statement 
	if/ if-else */
// program that checks whether a number is possitive or negative

import java.lang.*;

public class ifElse
{
	public static void main(String args[])
	{
		int numChekPON = -1;
		
		if(numChekPON > 0)
		System.out.println( numChekPON + " This is a Possitive number");
		else
		System.out.println( numChekPON + " This is a Negative number");
	}
}