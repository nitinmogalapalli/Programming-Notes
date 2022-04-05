main()
{
int y;
clrscr();
printf("enter a four digit year\n");
scanf("%d",&y);
if(y%4==0)
{
printf("it is a leap year");
}
else
{
printf("it is not a leap year");
}
getch();
}