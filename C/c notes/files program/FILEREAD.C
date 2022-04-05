/* program to Open an existing file and Read some data from the file */
#include<stdio.h>
main()
{
FILE *fp;
char c;
int i=0;
fp = fopen("NewFile.txt","r");
clrscr();
printf("20 character from the file: \n");
	for(i=0;i<20;i++)
	{
	c = getc(fp);
	putch(c);
	}
	fclose(fp);

}