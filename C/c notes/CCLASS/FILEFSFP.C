/* program to read data from a file and print it on to the screen using
   fscanf and fprintf
*/

#include<stdio.h>
main()
{
	FILE *fp;
	int sno;
	char filename[20],name[15];
	float per;
	clrscr();
	printf("Enter a file name: ");
	gets(filename);
	fp = fopen(filename,"w");
	printf("Enter data into the file:\n");
	printf("sno\tname\tper");
		fscanf(stdin,"%d%s%f",&sno,&name,&per);
		fprintf(fp,"%d%s%f\n",sno,name,per);
	fclose(fp);

	fp = fopen(filename,"r");
	printf("The record you entered is:\n");
		fscanf(fp,"%d%s%f",&sno,&name,&per);
		fprintf(stdout,"%-3d%6s%4f",sno,name,per);
	fclose(fp);
	getch();
}