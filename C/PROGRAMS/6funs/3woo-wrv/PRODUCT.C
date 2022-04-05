#include<stdio.h>
#include<conio.h>
int divisible();
int main()
{
    int r;
    clrscr();
    r=divisible();
    printf("Quotient is:%d",r);
    getch();
}
int divisible()
{
    int a,b,c;
    printf("enter two no.s\n");
    scanf("%d%d",&a,&b);
    c=a/b;
    return c;
}