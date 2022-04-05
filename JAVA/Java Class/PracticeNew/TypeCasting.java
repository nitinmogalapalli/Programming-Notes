// Program to understand the type conversion(Both automatic and Casting)

//File: TypeCasting.java

class TypeCasting
{
	public static void main(String ar[])
	{
		int iVar = 25;
		float fVar = 20.5f;
		
		byte bVar = 4;

		System.out.println("The value in Int var: " + iVar + "\nThe Value in Float var: " + fVar + "\nThe value byte var: " + bVar);
		//type casting integer to float
		// Here java uses automatic type conversion
		fVar = iVar;
		iVar = bVar;
		
		System.out.println("After Automatic Type conversion: \n");
		System.out.println("The value in Int var: " + iVar + "\nThe Value in Float var: " + fVar + "\nThe value byte var: " + bVar);

		//type casting float to integer using cast

		fVar = 256.25f;
		iVar = 78;
		bVar = 2;

		System.out.println("The value in Int var: " + iVar + "\nThe Value in Float var: " + fVar + "\nThe value byte var: " + bVar);

		iVar = (int) fVar;
		bVar = (byte) iVar;
		System.out.println("After Automatic Type conversion: \n");
		System.out.println("The value in Int var: " + iVar + "\nThe Value in Float var: " + fVar + "\nThe value byte var: " + bVar);

	}	
}