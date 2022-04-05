main()
{
int n,i,c=0;
clrscr();
printf("enter a no.\n");
scanf("%d",&n);
   for(i=1;i<=n;i++)
     if(n%i==0)
    {
       c++;
    }
     if(c==2)
    {
	 printf("it is prime");
    }
     else
    {
	printf("it is not prime");
    }
getch();
}