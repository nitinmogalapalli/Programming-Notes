/* Program to illustrate the pointer to arrays */
main()
{
	int arr[12],*pi;
	clrscr();
	arr[0] = 24;
	arr[1] = 50;
	pi = arr;  /* pointer to array assignment */

	printf("The address of the arr: %p\n",pi);
	printf("The value at the 1st: %d and 2nd: %d using pointer...",*pi,*(pi+1));

	getch();
}
