/* program to find the average of 10 integer numbers */
main()
{
	int avgarr[10],i,total=0;
	float avg;
	clrscr();
	printf("Enter 10 values to find the average:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&avgarr[i]);
		total = total + avgarr[i];
	}
	avg = total/10.0;
	printf("The average of the above 10 elements is: %f",avg);
	getch();
}