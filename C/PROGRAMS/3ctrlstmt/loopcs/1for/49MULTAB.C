#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter a no.\n");
scanf("%d",&n);
printf("multiplication table is:\n");
for(i=1;i<=20;i++)
{
printf("%d*%d=%d\n",n,i,n*i);
}
getch();
}