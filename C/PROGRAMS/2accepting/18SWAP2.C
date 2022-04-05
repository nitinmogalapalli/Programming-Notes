main()
{
int a,b;
clrscr();
printf("enter two values\n");
scanf("%d%d",&a,&b);
printf("before swap a:%d\tb:%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap a:%d\tb:%d",a,b);
getch();
}