#include<stdio.h>
#include<conio.h>
void show();
void sum();
void main()
{
    clrscr();
    printf("DVN COLLEGE\n");
    show();
    sum();
    getch();
}
void show()
{
    printf("this is an example program for functions\n");
}
void sum()
{
    int a,b,c;
    printf("enter two values\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of two no.s is:%d",c);
}