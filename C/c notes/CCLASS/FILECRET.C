/* program to create a file and write some data to the file */
#include<stdio.h>
main()
{
	FILE *fp;
	char c;
	int i=0;
	fp = fopen("NewFile.txt","w");

	printf("Enter 20 character to the file: \n");
	for(i=0;i<20;i++)
	{
		c = getchar();
		putc(c,fp);
	}
	fclose(fp);

}
