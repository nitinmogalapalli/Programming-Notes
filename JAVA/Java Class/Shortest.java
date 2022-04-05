// program to find shortest value 
import java.util.*;
class Shortest
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
int num1,num2,num3;
System.out.println("Enter three numbers to find shortest:");
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
if(num1<num2)
{
if(num1<num3)
System.out.println(num1 +" is shortest value..");
else
System.out.println(num3 +" is shortest value..");
}
else
{
if(num2<num3)
System.out.println(num2 +" is shortest value..");
else
System.out.println(num3 +" is shortest value..");
}
}
}

































