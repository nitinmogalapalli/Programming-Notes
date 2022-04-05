// program to read a number and print no of digits in that no.
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,c=0;
  clrscr();
  printf("enter a no.\n");
  scanf("%d",&n);
  while(n>0)
  {
     c++;
     n=n/10;
  }
  printf("no.of digis are:%d",c);
  getch();
}