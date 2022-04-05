/* program to find whether the given character is vowel or consonent */

#include<ctype.h>
main()
{
	char ch;
	clrscr();
	printf("Enter a character: ");
	scanf("%c",&ch);
	ch = toupper(ch);
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': printf("You entered a vowel...");
			break;
		default: printf("You entered a consonent...");
			break;
	}
	getch();
f}

/* output:
	Enter
	1. for Addition
	2. for Subtraction
	3. for Multiplication
	4. for Division
	1
	Enter two numbers:
	56
	57
	Addition of 56 & 57 is : 113
*/