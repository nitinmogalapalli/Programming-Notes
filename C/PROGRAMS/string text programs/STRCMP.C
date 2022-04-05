#include<stdio.h>
#include<string.h>
main()
{
char string1[10],string2[10];
int x;
clrscr();
printf("Enter any text :");
scanf("%s",string1);
printf("\n Enter text to compared :");
scanf("%s",string2);
x=strcmp(string1,string2);
if(x==0)
{
printf("\n They are similar words");
}
else
{
printf("\n They are not similar");
}

getch();
}