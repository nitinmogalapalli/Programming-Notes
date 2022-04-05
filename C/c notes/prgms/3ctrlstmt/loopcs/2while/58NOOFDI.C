main()
{
  int n,c=0;
  clrscr();
  printf("enter a no.\n");
  scanf("%d",&n);
  while(n>0)
  {
     c++;
     n=n/10;
  }
  printf("no.of digis are:%d",c);
  getch();
}