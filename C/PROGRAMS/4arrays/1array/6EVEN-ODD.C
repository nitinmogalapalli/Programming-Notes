#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,x[20];
     clrscr();
     printf("enter the range\n");
     scanf("%d",&n);
     printf("enter %d values\n",n);
     for(i=0;i<n;i++)
     {
	  scanf("%d",&x[i]);
     }
     printf("even no.s in the array\n");
     for(i=0;i<n;i++)
     if(x[i]%2==0)
      {
	      printf("%d\t",x[i]);
      }
      printf("\nodd no.s are:\n");
      for(i=0;i<n;i++)
      if(x[i]%2!=0)
      {
	     printf("%d\t",x[i]);
      }
     getch();
}