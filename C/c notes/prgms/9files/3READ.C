#include<stdio.h>
main()
{
   FILE *fp;
   char ch;
   clrscr();
   fp=fopen("hai.txt","r");
   while((ch=getc(fp))!=EOF)
   {
      printf("%c",ch);
   }
   fclose(fp);
   getch();
}