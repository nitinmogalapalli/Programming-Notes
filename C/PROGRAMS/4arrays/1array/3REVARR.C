#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n[5];
     clrscr();
     printf("enter five values\n");
     for(i=0;i<=4;i++)
     {
     scanf("%d",&n[i]);
     }
     printf("reverse of array is:\n");
     for(i=4;i>=0;i--)
     {
	  printf("%d\n",n[i]);
     }
     getch();
}