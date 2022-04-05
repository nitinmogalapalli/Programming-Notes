// java program to know the working of the Operators

import java.util.*;

class UseOfOperators
{
	public static void main(String args[])
	{
		int i1,i2,sumInt,subInt,mulInt,divInt,modInt,averageInt;
		Float f1,f2,averageFloat,sumFloat,subFloat,mulFloat,divFloat,modFloat;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter Two Integer Numbers: ");
		i1 = s.nextInt();
		i2 = s.nextInt();
		sumInt = i1 + i2;
		subInt = i1 - i2;
		mulInt = i1 * i2;
		divInt = i1 / i2;
		modInt = i1 % i2;
		averageInt = sumInt/2;
		System.out.println("Integer Computations:\n" + "Sum of two numbers: " + sumInt + "\nSub of two numbers: " + subInt + "\nMul of two numbers: " + mulInt + "\nDiv of two numbers: " + divInt + " \nMod  of Two numbers: " + modInt +"\nAverage of two numbers: " + averageInt);
		
		System.out.println("Enter Two Floating point numbers: ");
		f1 = s.nextFloat();
		f2 = s.nextFloat();
		sumFloat = f1 + f2;
		subFloat = f1 - f2;
		mulFloat = f1 * f2;
		divFloat = f1 / f2;
		modFloat = f1 % f2;
		averageFloat = sumFloat/2;
		System.out.println("Floating Point Computations:\n" + "Sum of two numbers: " + sumFloat + "\nSub of two numbers: " + subFloat + "\nMul of two numbers: " + subFloat + "\nDiv of two numbers: " + divFloat + "\nMod of two numbers: " + modFloat +"\nAverage of two numbers: " + averageFloat);
	}
}