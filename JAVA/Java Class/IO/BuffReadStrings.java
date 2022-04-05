// Program that reads Strings Using Buffered Reader Class

import java.io.*;

class BuffReadStrings
{
	public static void main(String args[]) throws IOException
	{
		String lns;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.println("Enter Lines of Text: (\"stop\" to Quit)");

		do
		{
			lns = br.readLine();
			System.out.println(lns);
		}while(!lns.equalsIgnoreCase("stop"));
		
	}
}