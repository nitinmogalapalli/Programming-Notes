#include<stdio.h>
#include<conio.h>
void main()
{
char x[20];
int i,l=0;
clrscr();
printf("enter a string\n");
gets(x);
for(i=0;x[i]!='\0';i++)
{
   l++;
}
for(i=l-1;i>=0;i--)
{
   printf("%c",x[i]);
}
getch();
}