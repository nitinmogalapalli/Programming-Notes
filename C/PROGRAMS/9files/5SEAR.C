#include<stdio.h>
main()
{
    FILE *fp;
    char ch,f[30];
    clrscr();
    puts("enter a file name");
    gets(f);
    fp=fopen(f,"r");
    if(fp==NULL)
    {
	 printf("file not exist\n");
    }
    else
    {
	 while((ch=getc(fp))!=EOF)
	 {
	     printf("%c",ch);
	 }
    }
    fclose(fp);
    getch();
}
