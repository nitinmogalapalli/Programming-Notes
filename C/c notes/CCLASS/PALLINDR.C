/* program to find whether the given number is pallindrome or not */

main()
{
	long int num,actual, rev=0,rem;
	clrscr();
	printf("Enter a number: ");
	scanf("%ld",&num);
	actual = num;
	while(num != 0)
	{
		rem = num%10;
		rev = rev*10 + rem;
		num /= 10;
	}
	if(actual == rev)
		printf("given number is PALLINDROME...");
	else
		printf("it is NOT A PALLINDROME...");
	getch();
}