// program to find add,sub,multi,div two values
import java.util.*;
class AddSubMultiDiv
{
public static void main(String[] args)
{
int num1,num2,choice;
Scanner sc=new Scanner(System.in);
do
{
System.out.println("Enter two values:");
num1=sc.nextInt();
num2=sc.nextInt();
choice=sc.nextInt();
System.out.println("1 for addition \n 2.for subtraction \n 3.for multiplication \n 4.for division \n Any number for exit \n enter a choice:");
switch(choice)
{
case 1:System.out.println("The addition is :"+(num1+num2));
break;
case 2:System.out.println("The subtraction is :"+(num1-num2));
break;
case 3:System.out.println("The multiplication is:"+(num1*num2));
break;
case 4:System.out.println("The division is:"+(num1/num2));
break;
default:System.out.println("Invalid choice:");
break;
}
}while(choice<=4);
}
}
