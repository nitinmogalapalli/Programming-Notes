/* finding maximum and minimum among three values */

import java.util.*;

class MaxAndMinOfThree
{
	public static void main(String max[])
	{
		int a,b,c;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Three Values to find Max: ");
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();

		if( a>b)
		{
			if(a>c)
			System.out.println("Max : " + a);
			else
			System.out.println("Max : " + c);
		}
		else
		{
			if(b>c)
			System.out.println("Max : " + b);
			else
			System.out.println("Max : " + c);
		}
	}	
}