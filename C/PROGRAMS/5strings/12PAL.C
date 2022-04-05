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
strrev(a);
if(strcmp(a,b)==0)
{
    printf("it is palindrom");
}
else
{
    printf("it is not palindrom");
}
getch();
}
