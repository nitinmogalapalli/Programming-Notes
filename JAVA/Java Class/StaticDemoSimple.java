// program to understand the static keyword

// File: StaticDemoSimple.java

class SDS
{
	private int iVar = 10;
	static int iVar1 = 20;
	static int iVar2;

	static
	{
		System.out.print("Static Block Used: ");
		
		//iVar = 5;  Error
		iVar1 = 10;
		iVar2 = 2 * iVar1;
		
		System.out.println();
	}

	void setMyValues(int i, int i1, int i2)
	{
		iVar = i;
		iVar1 = i1;
		iVar2 = i2;
	}

	static void accessStatic()
	{
		System.out.println("From a static method: ");
		System.out.println("iVar1 : " + iVar1 + "\niVar2 : " + iVar2);
		//System.out.println("iVar1 : " + iVar1 + "\niVar2 : " + iVar2 + "\niVar" + iVar); Error at iVar because iVar is not a static member

		//setMyValues(1,2,3);  Error
	}
	
}

class StaticDemoSimple
{
	public static void main(String args[])
	{
		
		SDS.iVar1 = 1;
		SDS.iVar2 = 2;

		SDS.accessStatic();

		SDS sdsObj = new SDS();

		//System.out.println("Normal Variable: " + sdsObj.iVar);
		//System.out.println("Static Variable 1: " + sdsObj.iVar1);
		//System.out.println("Static Variable 2: " + sdsObj.iVar2);
		//sdsObj.iVar = 20;
		//sdsObj.iVar1 = 111;
		
	}
}