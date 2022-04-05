/* program to understand the switch usage */

import java.util.*;
class SwitchUsage
{
	public static void main(String arg[])
	{
		int num1,num2,choice;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter:");
		System.out.println("1. For Add\n2. For Sub\n3. For Mul\n4. For Div");
		System.out.print("Your Choice: ");
		choice = sc.nextInt();

		System.out.println("Enter Two Values:");
		num1 = sc.nextInt();
		num2 = sc.nextInt();

		switch(choice)
		{
		case 1: System.out.println("The Addtion is: " + (num1 + num2));
		break;
		case 2: System.out.println("The Subtraction is: " + (num1-num2));
		break;
		case 3: System.out.println("The Multiplication is: " + (num1*num2));
		break;
		case 4: System.out.println("The Division is: " + (num1/num2));
		break;
		default: System.out.println("INVALID CHOICE...!");
		break;
		}
	}
}