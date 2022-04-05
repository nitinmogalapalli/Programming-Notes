/* finding the length of the string using loop */

void main()
{
	int i;
	char name[20];
	clrscr();

	printf("enter sequence of characters...: ");
	flushall();
	gets(name);

	for(i=0; name[i] != '\0'; i++);
	printf("The length of the string is: %d", i);
	getch();

}