main()
{
int exp;
float bs,ns;
clrscr();
printf("Enter Employee Basic salary and Experience\n");
scanf("%f%d",&bs,&exp);
if(exp>=3)
{
   ns=bs+2500;
   printf("net salary is Rs:%f\n",ns);
}
else
{
   printf("no bonus\nnet salary is Rs:%f",bs);
}
getch();
}