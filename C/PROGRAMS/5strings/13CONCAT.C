#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
clrscr();
printf("enter a string\n");
gets(a);
printf("enter another string\n");
gets(b);
strcat(a,b);
printf("added string is:%s",a);
getch();
}
