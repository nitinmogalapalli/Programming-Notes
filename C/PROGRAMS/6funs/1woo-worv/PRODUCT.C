#include<stdio.h>
#include<conio.h>
void product();
void main()
{
    clrscr();
    product();
    getch();
}
void product()
{
    int a,b,c;
    printf("enter two values\n");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("product of two no.s is:%d",c);
}