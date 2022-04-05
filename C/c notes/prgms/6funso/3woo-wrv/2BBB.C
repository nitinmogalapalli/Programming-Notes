int area();
void main()
{
    int r;
    clrscr();
    r=square();
    printf("square is:%d",r);
    getch();
}
int square()
{
    int x,c;
    printf("enter a value\n");
    scanf("%d",&x);
    c=x*x;
    return c;
}