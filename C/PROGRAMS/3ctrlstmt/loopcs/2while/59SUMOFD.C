//sum of digits
#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s=0;
clrscr();
printf("enter a no.\n");
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+r;
n=n/10;
}
printf("sum of digis are:%d",s);
getch();
}