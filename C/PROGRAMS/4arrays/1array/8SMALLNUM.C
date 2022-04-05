#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,x[20],min;
     clrscr();
     printf("enter the range\n");
     scanf("%d",&n);
     printf("enter %d values\n",n);
     for(i=0;i<n;i++)
     {
	  scanf("%d",&x[i]);
     }
     min=x[0];
     for(i=0;i<n;i++)
     {
	  if(x[i]<min)
	  min=x[i];
     }
     printf("the smallest number in the array is:%d",min);
     getch();
}