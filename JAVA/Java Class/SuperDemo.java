// Super Keyword Demo

/*

	Super can be used in two forms.
	1. super as a keyword (representing super class object)
	2. super as a method to call super class constructors (representing superclass Constructor)


	usage as a keyword:
		super.member;  // To refer Super class Variables

	usage as a method:
		super(); // this is to call a super class constructor of its immediate super class

	Super can be used only inside of the methods/Constructors

*/

class ExampleOne
{
	int i,j;
	ExampleOne()
	{
		i = 20;
		j = 15;
	}
}

class ExampleTwo extends ExampleOne
{
	int i;

	ExampleTwo()
	{
		i = 50;
	}

	void changeSuper(int ival)
	{
		super.i = ival;
	} 

	void show()
	{
		
		System.out.println("The variable i in ExampleOne class: " + super.i +
		 "\nThe variable j in ExampleOne class: " + super.j +
		 "\nThe variable i in ExampleTwo class: " + i);
	}
	
}

class SuperDemo
{
	public static void main(String arg[])
	{
		ExampleTwo ex21 = new ExampleTwo();

		ex21.show();
		System.out.println("The Values After Changing:");

		ex21.i = 50;
		ex21.changeSuper(10);
		ex21.j = 25;

		ex21.show();
	}
}
