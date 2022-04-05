main()
{
int n,r,rev=0,m;
clrscr();
printf("enter a no.\n");
scanf("%d",&n);
m=n;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(m==rev)
{
printf("it is palindrom");
}
else
{
printf("it is not palindrom");
}
getch();
}