/* program to Open an existing file and put integers to the end the file */
#include<stdio.h>
main()
{
	FILE *fp;
	int i=0;
	fp = fopen("D:/C/NewFile.txt","w");
	clrscr();
	/* printf("Enter 20 Integers to the file: \n");*/
	for(i=0;i<20;i++)
	{
		putw(i,fp);
	}
	fclose(fp);

}