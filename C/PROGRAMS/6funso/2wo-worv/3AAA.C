void sum(int,int);
void main()
{
    int a,b,c;
    clrscr();
    printf("enter 2 val\n");
    scanf("%d%d",&a,&b);
    sum(a,b);
    getch();
}
void sum(int x,int y)
{
    int c;
    c=x+y;
    printf("sum of given no.s:%d",c);
}