// Program that reads Characters Using Buffered Reader Class

import java.io.*;

class BuffRead
{
	public static void main(String args[]) throws IOException
	{
		char ch;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Enter Characters: ('q' to Quit)");

		do
		{
			ch = (char) br.read();
			System.out.println(ch);
		}while(ch!='q');
		
	}
}