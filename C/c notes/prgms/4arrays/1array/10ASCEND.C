main()
{
     int i,j,n,t,x[20];
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
	 for(j=0;j<n;j++)
	 {
	      if(x[i]<x[j])
	      {
		   t=x[i];
		   x[i]=x[j];
		   x[j]=t;
	      }
	 }
     }
     printf("after swap\n");
     for(i=0;i<n;i++)
     {
	  printf("%d\t",x[i]);
     }
     getch();
}