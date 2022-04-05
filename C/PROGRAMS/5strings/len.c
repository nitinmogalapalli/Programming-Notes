#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int l;
char s[10];
clrscr();
printf("Enter a String\n");
gets(s);
l=strlen(s);
printf("The length of s is %d",l);
getch();
}