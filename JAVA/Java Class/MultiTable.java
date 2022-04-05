// program to print multiplication tables
// MultiTables.java

import java.util.*;

class MultiTable
{
	public static void main(String args[])
	{
		int table = 10;
		for( int i=1;i<=21;i++)
		{
			if( i <=10 )
			for(int j=1;j<=table-5;j++)
				System.out.print( j + " X " + i + " = " + j*i + "\t" );
			else if( i==11)
				System.out.println("");
			else
				for(int j=table-4;j<=table;j++)
					System.out.print( j + " X " + (i-11) + " = " + (j*(i-11)) + "\t" );
		}
	}

}