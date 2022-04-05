void show();
void sum();
void main()
{
    clrscr();
    printf("Aptech computer education\n");
    show();
    sum();
    getch();
}
void show()
{
    printf("this is an example program for functions\n");
}
void sum()
{
    int a,b,c;
    printf("enter two values\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of two no.s is:%d",c);
}