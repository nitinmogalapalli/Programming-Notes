#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int l;
char a[20],b[20];
clrscr();
printf("enter a string\n");
gets(a);
l=strlen(a);
printf("string length is:%d\n",l);
strcpy(b,a);
printf("copied string is:%s\n",b);
strupr(a);
printf("string in upper case:%s\n",a);
strlwr(a);
printf("string in lower case:%s\n",a);
strcat(a,b);
printf("added string is:%s\n",a);
strrev(a);
printf("string reverse is:%s",a);
getch();
}
