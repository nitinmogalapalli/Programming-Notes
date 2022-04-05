main()
{
char x[20];
int i,l=0;
clrscr();
printf("enter a string\n");
gets(x);
for(i=0;x[i]!='\0';i++)
{
l++;
}
printf("string length is:%d",l);
getch();
}