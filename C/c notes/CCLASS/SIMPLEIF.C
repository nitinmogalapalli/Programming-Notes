/*program for understanding the simple if by finding the max among four values*/
#include<stdio.h>
#include<conio.h>
main()
{
int a, b,c,d;
clrscr();
{
printf("enter four numberd to find greatest among them...\n");
scanf("%d%D%D%D",&a,&b,&c,&d);
}
/*simple if checking a condition...*/
if((a>b)&&(a>c)&&(a>d))
{
printf("greatest is:%d",a);
}
if ((b>a)&&(b>c)&&(b>d))
{
printf("greatest is;%d",b);
}
if((c>a)&&(c>b)&&(c>d))
{
printf("greatest is:%d",c);
}
if((d>a)&&(d>b)&&(d>c))
{
printf("greatest is:%d",d);
}
if((a==b)&&(b==c)&&(c==d))
printf("they are equal...");
getch();
}