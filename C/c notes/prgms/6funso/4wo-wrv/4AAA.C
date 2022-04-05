float bill(int,float);
void main()
{
    int ni;
    float c,r;
    clrscr();
    printf("enter no of items and item cost\n");
    scanf("%d%f",&ni,&c);
    r=bill(ni,c);
    printf("total amount is:%f",r);
    getch();
}
float bill(int x,float y)
{
    int ta;
    ta=x*y;
    return ta;
}