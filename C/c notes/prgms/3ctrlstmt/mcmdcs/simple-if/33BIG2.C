main()
{
int a,b,c;
clrscr();
printf("enter three no.s\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is big",a);
}
if(b>a&&b>c)
{
printf("%d is big",b);
}
if(c>a&&c>b)
{
printf("%d is big",c);
}
getch();
}