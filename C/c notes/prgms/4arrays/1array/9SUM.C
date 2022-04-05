main()
{
     int i,n,x[20],sum=0;
     clrscr();
     printf("enter the range\n");
     scanf("%d",&n);
     printf("enter %d values\n",n);
     for(i=0;i<n;i++)
     {
	  scanf("%d",&x[i]);
     }
     for(i=0;i<n;i++)
     {
	 sum=sum+x[i];
     }
     printf("sum of array is:%d",sum);
     getch();
}