//Program: DataReadingFromCommandLine.java
// Reading Integer Data  from Command Line

import java.lang.*;

class DataReadingFromCommandLine
{
 public static void main(String args[])
 {
	int a,b;
	a = Integer.parseInt(args[0]);
	b = Integer.parseInt(args[1]);

	System.out.println("Entered Values a,b are: \n" + a + "  " + b);
 }
}