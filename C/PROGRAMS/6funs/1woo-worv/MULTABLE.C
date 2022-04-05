void multab();
void main()
{
    clrscr();
    multab();
    getch();
}
void multab()
{
    int i,n;
    printf("enter the range\n");
    scanf("%d",&n);
    printf("multipliction table is\n");
    for(i=1;i<=n;i++)
    {
	printf("%d*%d=%d\n",n,i,n*i);
    }
}