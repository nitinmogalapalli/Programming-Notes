#include<stdio.h>
#include<conio.h>
void main()
{
   FILE *fp;
   char ch;
   clrscr();
   fp=fopen("hai.txt","a");
   printf("enter a text\n");
   while((ch=getchar())!=EOF)
   {
      fputc(ch,fp);
   }
   fclose(fp);
   getch();
}