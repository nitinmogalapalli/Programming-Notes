#include<stdio.h>
#include<conio.h>
void main()
{
char x[20];
int i;
clrscr();
printf("enter a string\n");
gets(x);
printf("string in lowercase:\t");
for(i=0;x[i]!='\0';i++)
{
x[i]=x[i]+32;
printf("%c",x[i]);
}
getch();
}