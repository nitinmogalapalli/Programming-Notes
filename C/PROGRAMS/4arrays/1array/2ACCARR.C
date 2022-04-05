#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n[5];
     clrscr();
     printf("enter five values\n");
     for(i=0;i<5;i++)
     {
     scanf("%d",&n[i]);
     }
     printf("the values in the array\n");
     for(i=0;i<5;i++)
     {
	  printf("%d\n",n[i]);
     }
     getch();
}