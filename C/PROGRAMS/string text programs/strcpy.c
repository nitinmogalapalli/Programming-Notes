#include<stdio.h>
#include<string.h>
main()
{
char string1[10];
char string2[10];
clrscr();
puts("Enter the first string");
gets(string1);
puts("Enter the second string");
gets(string2);
strcpy(string1,string2);
printf("\n The final string is %s",string1);
getch();
}
