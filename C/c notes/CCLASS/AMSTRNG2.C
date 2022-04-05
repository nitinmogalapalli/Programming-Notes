/*
Amstrong Numbers:
	A number is said to be Amstrong number when sum of cubes of its
individual digits is equal to that number.

	253 = cube(2) + cube(5) + cube(3);

	253/10  =  25, 253%10  =  3
	25/10   =  2,  25%10   =  5
	2/10    =  0,  2%10    =  2

*/

/* Program to find amstrong numbers from 1 to 1000 */

main()
{
	int num,rem,sum,actual,i;
	clrscr();
	printf("The Amstrong Numbers from 1 to 1000: ");
	for(num = 1;num <= 1000;num++)
	{
		sum = 0;
		actual = num;
		while ( actual != 0)
		{
			rem = actual%10;
			sum += rem*rem*rem;
			actual = actual/10;
		}
		if( num == sum )
			printf("The Number %d is a Amstrong Number...\n",num);

	}
	getch();
}
