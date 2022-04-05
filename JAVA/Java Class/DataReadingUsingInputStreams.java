//FileName: DataReadingUsingInputStreams.java
/* program to read data using Input Streams */

import java.io.*;

class DataReadingUsingInputStream 
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter Two Numbers: ");
		int a,b;
		a = Integer.parseInt(br.readLine());
		b = Integer.parseInt(br.readLine());

		System.out.println("Enterd numbers are: \na : " + a + "\nb : " + b);
	}
}