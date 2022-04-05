main()
{
char x[20];
int i;
clrscr();
printf("enter a string\n");
gets(x);
printf("string in opposite case:\t");
for(i=0;x[i]!='\0';i++)
{
if(x[i]>=65&&x[i]<=90)
{
x[i]=x[i]+32;
}
else if(x[i]>=97&&x[i]<=122)
{
x[i]=x[i]-32;
}
printf("%c",x[i]);
}
getch();
}