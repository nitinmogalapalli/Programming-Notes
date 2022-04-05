// program to read a no and check it is armstrong or not.
#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,ams=0,r;
clrscr();
printf("enter a no\n");
scanf("%d",&n);
m=n;
while(n>0)
{
r=n%10;
ams=ams+(r*r*r);
n=n/10;
}
if(ams==m)
{
printf("amstrong");
}
else
{
printf("not amstrong");
}
getch();
}
