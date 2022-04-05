/*
Arrays:
	if you require number of variables to store number of values(each one for
one value) C language has a better way to organize your data.

	Here is a simple concept that makes you store and retrieve the
different values as a collection using a single variable.
That is Array concept.

	what is array?
		It is a collection/set of elements of the same data type.
	How many types of arrays?
		1D(one Dimensional), 2D(two dimensional),3D(Three Dimensional), etc.

1. Dimensional Arrays:

	Syntax:
		data_type array_var[size];
	Eg:
		int a[10];
	Here we are about to declare an array of integers of size 10. array
a can store upto 10 integer elements.

	Initialization:
		int a[5] = {3,5,7,23,900};

	Reading values to the array:

		We are about to store number of elements as a single unit, but how can we access the values individually. For this, we have to specify the index of the element with the array specification.

	index of an array represents the position of element in the memory of array. we need to know the storage of array: elements of array can be allocated in coniguous(continuous) memory locations.

		scanf("%d",a[3]);

		for(i=0;i<5;i++)
			scanf("%d",&a[i]);
		Here i is an index of the array element.
	Assigning values to the array:
		a[0] = 20;
		a[i] = a + 9;

 2-Dimensional Arrays:
	Syntax:
		DataType arr_name[row][col];
	Eg:
		int mat[3][3];
	Initialzation:
		int mat[3][3] = {{6,8},{32,54,78},{10,23,48}};
	Reading:
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
				scanf("%d",&mat[i][j]);
	Assigning Values:
		mat[0][1] = 30;
		mat[1][0] = 22;


*/