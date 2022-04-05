#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,x[5];
     clrscr();
     printf("enter the range\n");
     scanf("%d",&n);
     printf("enter %d values\n",n);
     for(i=0;i<n;i++)
     {
	  scanf("%d",&x[i]);
     }
     printf("double values in the array\n");
     for(i=0;i<n;i++)
     {
	  x[i]=x[i]*2;
	  printf("%d\t",x[i]);
     }
     getch();
}