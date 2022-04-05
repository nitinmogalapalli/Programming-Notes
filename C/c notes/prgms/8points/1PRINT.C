main()
{
   int a,*p;
   clrscr();
   printf("enter a no\n");
   scanf("%d",&a);
   p=&a;
   printf("the entered no is:%d\n",a);
   printf("the entered no address is:%u\n",&a);
   printf("the entered no is:%d\n",*p);
   printf("the entered no address is:%u",p);
   getch();
}
