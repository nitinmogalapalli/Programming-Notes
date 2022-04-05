#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,*p,*q;
   clrscr();
   printf("enter two no.s\n");
   scanf("%d%d",&a,&b);
   printf("before swap:a=%d\tb=%d\n",a,b);
   p=&a;
   q=&b;
   c=*p;
   *p=*q;
   *q=c;
   printf("after swap:a=%d\tb=%d\n",*p,*q);
   getch();
}
