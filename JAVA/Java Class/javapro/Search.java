import java.util.*;
import java.lang.*;
class Search
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
	
	System.out.println("enter ur searchingelement :");
	
	Scanner p=new Scanner(System.in);
	int d=p.nextInt();
	
	int c=0;
	for(i=0;i<n;i++)
	{
	if(d==arr[i])
	System.out.println("element u entered is found"+d);
	c=c+1;
	}
	if(c==0)
	System.out.println("element u entered is not found::");	
	
   }
}