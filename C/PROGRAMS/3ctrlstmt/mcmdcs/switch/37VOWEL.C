#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter a character\n");
scanf("%c",&ch);
switch(ch)
{
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       printf("it is vowel");
       break;
default:
	printf("it is consonant");
}
getch();
}