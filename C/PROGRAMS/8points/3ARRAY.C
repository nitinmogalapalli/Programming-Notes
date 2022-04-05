void main()
{
   int a[20],*p,i,n;
   clrscr();
   printf("enter the range\n");
   scanf("%d",&n);
   printf("enter %d no.s\n",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       p=&a[i];
       printf("\n%d no in the array is:%d\t",i+1,*p);
       printf(" address is:%u\n",p);
   }
   getch();
}