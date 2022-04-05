// program to Declare a string and perform some operations on it
/* 
String substring(st_Index,end_Index);
String substring(Index);


int length();

char charAt(Position/Index);

boolean equals(String);

boolean equalsIgnoreCase(String anotherString);

*/



class StringOperations
{
	public static void main(String args[])
	{
//		String strVar = "RajesHKumar"; // String Initiolization
		String strVar = new String("RajesHKumar");
		
		System.out.println("The String you declared is : " + strVar);

		// cutting  given String in to two other Strings
		String subStr1 = strVar.substring(0,6);
		String subStr2 = strVar.substring(6);

		System.out.println("The Two SubStrings of the main Stirng are : " + subStr1 + " and " + subStr2);

		// Finding String Length
		int strLength = strVar.length();
		System.out.println("The length of the String is : " + strLength);

		// Finding a character at position 5
		char ch = strVar.charAt(5);

		System.out.println("The char At Position 5 of Main String : " + strVar + " is : " + ch);

		// Finding the two subStrings equal or not
		if( subStr1.equals(subStr2) )
			System.out.println("The two SubStrings are Equal");
		else
			System.out.println("The two SubStrings are NOT Equal");

		// Printing the main string in uppercase
		strVar = strVar.toUpperCase();
		System.out.println("The MainSting in UpperCase: " + strVar);

		// Printing the main string in lower case
		strVar = strVar.toLowerCase();
		System.out.println("The MainSting in LowerCase: " + strVar);

		subStr1 = "HellOHai";
		subStr2 = "helloHAI";
		System.out.print("Comparing Two strings: str1 = " + subStr1 + " and str2 = " + subStr2 + " Using Equals Ignore case...: ");
		if( subStr1.equalsIgnoreCase(subStr2) )
			System.out.println("The Both are EQUAL...");
		else
			System.out.println("The Both are NOT EQUAL...");
	}
}