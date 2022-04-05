float area();
void main()
{
    float r;
    clrscr();
    r=area();
    printf("area of circle:%f",r);
    getch();
}
float area()
{
    int x;
    float c;
    printf("enter radius of circle\n");
    scanf("%d",&x);
    c=x*3.14;
    return c;
}