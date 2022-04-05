main()
{
     int i,n,x[20],max;
     clrscr();
     printf("enter the range\n");
     scanf("%d",&n);
     printf("enter %d values\n",n);
     for(i=0;i<n;i++)
     {
	  scanf("%d",&x[i]);
     }
     max=x[0];
     for(i=0;i<n;i++)
     {
	  if(x[i]>max)
	  max=x[i];
     }
     printf("the biggest number in the array is:%d",max);
     getch();
}