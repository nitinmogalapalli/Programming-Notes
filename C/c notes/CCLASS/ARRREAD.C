/* Program to declare and read an array of integers */

main()
{
	int arr[10],i;
	clrscr();
	printf("Enter elements to the array..:\n");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	printf("You Entered elements in the array are\n");
	for(i=0;i<10;i++)
	printf("%-3d",arr[i]);
	getch();
}