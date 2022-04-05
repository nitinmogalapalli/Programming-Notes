void product(int,float);
void main()
{
    int a;
    float b;
    clrscr();
    printf("enter 2 val\n");
    scanf("%d%f",&a,&b);
    product(a,b);
    getch();
}
void product(int x,float y)
{
    float c;
    c=x*y;
    printf("sum of given no.s:%f",c);
}