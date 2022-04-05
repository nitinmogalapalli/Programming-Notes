main()
{
   int a[20],*p,i,n;
   clrscr();
   printf("enter the range\n");
   scanf("%d",&n);
   printf("enter the %d no.s\n",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       p=&a[i];
       printf("%d no. double of the array is:%d\n",i+1,*p*2);
   }
   getch();
}