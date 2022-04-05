/* program to use the functions defined in ctype.h */
#include<ctype.h>
#include<stdio.h>
#include<conio.h>

main()
{
	char a;
	clrscr();
	printf("Enter a char: ");
	scanf("%c",&a);
	if(isalpha(a))
	{
		printf("You entered an Alphabet...\n");
	}
	else
		printf("U entered A NON Alphabet!!!\n");

	printf("Enter a char to find whether it is a digit or not:\n");
	a = getchar();
	if(isdigit(a))
		printf("%c is a digit...\n",a);
	else
		printf("IT is NOT a digit...\n");

		printf("enter a char:\n");
		a = getchar();
		a=tolower(a);
		printf("The lowercase of given char %c",a);
	getch();
}