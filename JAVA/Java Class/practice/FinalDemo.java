// program to find understand the final keyword
class FinalDemo
{
public static void main(String args[])
{
final int var1=20;
int var2=58;
System.out.println("The value of final variable is:"+var1);
System.out.println("The value of normal varinble is:"+var2); 
var2=69;
System.out.println("The value of final varable is:"+var1);
System.out.println("The value of normal variable ofter changing value is:"+var2);
}
}