import java.util.*;

class PrimeFrom1To100
{
	public static void main(String args[])
	{
		int i,j,count;

		for(i=1;i<=100;i++)
		{
			count =0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j == 0)
				count++;
			}
			if(count == 0)
			System.out.print( i +"  ");
		}
	}
}