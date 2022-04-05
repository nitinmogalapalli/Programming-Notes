main()
{
clrscr();
printf("This is an example program\n");
show();
square();
getch();
}
show()
{
printf("This is sub fun\n");
}
square()
{
int a=15,s;
s=a*a;
printf("Square is %d",s);
}
