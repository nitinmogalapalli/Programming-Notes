// program to find multiplication tables
import java.util.*;
class MultiTable
{
public static void main(String[] args)
{
int table=10;
for(int i=1;i<=21;i++)
{
if(i<=10)
for(j=1;j<=table-5;j++)
System.out.println(i+ "X" +j+ "=" +i*j+"\t");
else 
if(i=11)
System.out.println(" ");
else
for(int j=table-4;j<=table;j++);
System.out.println((i-11)+ "X" +j+ "=" +((i-11)*j)+ "\t");
}
}
}