#include<stdio.h>
#include<conio.h>
void main()
{
char x[20];
int i;
clrscr();
printf("enter a string\n");
gets(x);
printf("string in vertical:\n");
for(i=0;x[i]!='\0';i++)
{
printf("%c\n",x[i]);
}
getch();
}