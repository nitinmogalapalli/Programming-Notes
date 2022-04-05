main()
{
int a,b,c;
clrscr();
printf("enter two values\n");
scanf("%d%d",&a,&b);
printf("before swap a:%d\tb:%d\n",a,b);
c=a;
a=b;
b=c;
printf("after swap a:%d\tb:%d",a,b);
getch();
}