#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
clrscr();
printf("enter a string\n");
gets(a);
strcpy(b,a);
printf("copied string is:%s\n",b);
getch();
}