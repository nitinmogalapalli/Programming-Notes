main()
{
int fn=0,sn=1,tn=0,n;
clrscr();
printf("enter the range\n");
scanf("%d",&n);
printf("FEBENOCCI SERIES is\n");
while(n>=tn)
{
   tn=fn+sn;
   fn=sn;
   sn=tn;
   if(tn<n)
   printf("%d\t",tn);
}
getch();
}