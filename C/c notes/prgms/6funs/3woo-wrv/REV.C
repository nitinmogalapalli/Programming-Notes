int reverse();
int main()
{
      int v;
      clrscr();
      v=reverse();
      printf("reverse is:%d",v);
      getch();
}
  int reverse()
    {
       int n,rev=0,r;
       printf("enter a no\n");
       scanf("%d",&n);
       while(n>0)
    {
	r=n%10;
	rev=rev*10+r;
	n=n/10;
    }
    return rev;
}