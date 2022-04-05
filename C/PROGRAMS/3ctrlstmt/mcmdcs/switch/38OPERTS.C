#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,r;
char ope;
clrscr();
printf("enter a arthimetical operator\n");
scanf("%c",&ope);
printf("enter two no.s\n");
scanf("%d%d",&a,&b);
    switch(ope)
    {
       case '+':
		r=a+b;
		printf("sum of two no.s are:%d",r);
		break;
       case '-':
		r=a-b;
		printf("differance of two no.s are:%d",r);
		break;
       case '*':
		r=a*b;
		printf("product of two no.s are:%d",r);
		break;
       case '/':
		r=a/b;
		printf("quiotient of two no.s are:%d",r);
		break;
       case '%':
		r=a%b;
		printf("remainder of wo no.s are:%d",r);
		break;
       default:
		printf("invalid operator\n");
		
    }
    getch();
}