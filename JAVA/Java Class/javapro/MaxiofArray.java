import java.lang.*;
import java.util.*;

class MaxiofArray
{
	public static void main(String args[])
	{
	
	int[] arr=new int[50];
	Scanner s=new Scanner(System.in);
	System.out.println("Enter ur Array size--> ");
	int n=s.nextInt();
	System.out.println("Enter ur Array--> ");
	int i;	
	for(i=0;i<n;i++)
	{
	arr[i]=s.nextInt();
	}
 
	for(i=0;i<n;i++)
	{
	if(arr[i]>arr[i+1])
	arr[i+1]=arr[i];
	}
	System.out.println("mex element is:"+arr[n-1]);
	}
  }