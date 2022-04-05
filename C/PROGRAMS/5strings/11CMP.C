#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b[20];
clrscr();
printf("enter a string\n");
gets(a);
printf("enter another string\n");
gets(b);
if(strcmp(a,b)>0)
{
    printf("%s is big",a);
}
else if(strcmp(a,b)<0)
{
     printf("%s is big",b);
}
else
{
     printf("both are equal");
}
getch();
}