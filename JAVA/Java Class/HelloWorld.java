/* File: HelloWorld.java */
// used to print some message

// package PackageName[.SubPackageName.[.Sub...]]


import statement;

class HelloWorld
{
/** main method used to print a message*/
	public static void main(String args[])
	{
	System.out.println("Hello to java world...");
	}
}

/* 
Here we used three comments used in java,
---	Multi line comments /*	*/
---	Single Line Comments	//
---	Documentation comments	/**	*/

After these we include two statements:
"Pacakage" Satement: Which is used to specify the user defined package.

"Import" Statement: If you reqire some other Classers that are to be used in your program we need to import those classes by specifying the path to that class from the API.


class: 
	It is a keyword used to define a Model / Structure/ Type which can be followed by the objects of its type.

	It contains Data Members and Member Functions.

public:
	It is an Access Specifier which makes you to access tha method from any where in the computer.

static:
	 It is a keyword that is to make the method accessed without defining the object of the class. We can access these static memebers by the class name.

String:
	It is a Class that is to delcare a string as an obect of its type which is a "string".

System:
	It is also a class which represents your working system. This class contains the data members that are:
	in	--- is to represent your system basic input device (keyboard)
	out	--- is to represent your basic output device(console)
	err	--- It is to specify the error reprorts

println():
	It is a method defined in System class to print some string on to the console.

*/