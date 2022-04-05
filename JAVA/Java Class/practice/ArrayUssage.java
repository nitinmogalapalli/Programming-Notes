// program to understand array ussage
import java.util.*;
class ArrayUssage
{
public static void main(String args[])
{
int[] sumarray=new int[30];
int i,total=0;
Scanner sc=new Scanner(System.in);
System.out.println("Enter how many elements you want to enter:");
int elements=sc.nextInt();
System.out.println("Enter"+elements+"values calculate total..");
for(i=0;i<elements;i++)
{
sumarray[i]=sc.nextInt();
total+=sumarray[i];
}
System.out.println("The total of given numbers is:"+total);
}
} 