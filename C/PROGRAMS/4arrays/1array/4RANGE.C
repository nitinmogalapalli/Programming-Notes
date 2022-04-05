#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,x[15];
     clrscr();
     printf("enter the range\n");
     scanf("%d",&n);
     printf("enter %d values\n",n);
     for(i=0;i<n;i++)
     {
     scanf("%d",&x[i]);
     }
     printf("the values in the array\n");
     for(i=0;i<n;i++)
     {
	  printf("%d\t",x[i]);
     }
     getch();
}