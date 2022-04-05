#include<stdio.h>
main()
{
   FILE *fp;
   char ch;
   clrscr();
   fp=fopen("hai.txt","w");
   printf("enter a character\n");
   ch=getchar();
   putc(ch,fp);
   fclose(fp);
   getch();
}