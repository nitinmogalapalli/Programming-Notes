/* finding the given character is vowel or consonent using SWITCH */

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("Enter a character to find whether it is vowel or consonent:");
	ch = getchar();

	if( ((ch >= 65) && ( ch <= 90)) || ((ch >= 97) && (ch <= 122)) )
	{
		ch = toupper(ch);
		switch( ch )
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				 printf("Entered character is VOWEL...");
				 break;
			default:
				 printf("Entered character is CONSONENT...");
				 break;
		}
	}
	else
		printf("the character you entered is NOT a VALID character...!!!");
	getch();
}