// program to compute add,sub,mul,div based on the user choice
// AddSubMulDiv.java
import java.util.*;

class AddSubMulDiv
{
	public static void main(String args[])
	{
		int choice,num1,num2;
		Scanner sc = new Scanner(System.in);
		
		do
		{
			System.out.println("Enter Two numbers: ");
			num1 = sc.nextInt();
			num2 = sc.nextInt();
			System.out.println(" 1. for Addition \n 2. for Subtraction \n 3. for Multiplication \n 4. for Division \n ANY number for exit \n Enter a choice:");
			choice = sc.nextInt();
			switch(choice)
			{
				case 1:System.out.println("The Addition is : "+ (num1+num2));
				            break;
				case 2:System.out.println("The Subtraction is : "+ (num1-num2));
				            break;
				case 3:System.out.println("The Multiplication is : "+ (num1*num2));
				            break;
				case 4:System.out.println("The Division is : "+ (num1/num2));
				            break;
				default:System.out.println("Invalid Choice........");
					break;
			}
	
		}while(choice <=4);
	}
}
