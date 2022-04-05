/* program to Open an existing file and append some data to the end the file */
#include<stdio.h>
main()
{
	FILE *fp;
	char c;
	int i=0;
	fp = fopen("D:/C/NewFile.txt","a");
	clrscr();
	printf("Enter 20 characters append to the file: \n");
	for(i=0;i<20;i++)
	{
		c = getchar();
		putc(c,fp);
	}
	fclose(fp);

}