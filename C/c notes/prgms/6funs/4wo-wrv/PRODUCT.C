int product(int,int);
int main()
{
    int x,y,r;
    clrscr();
    printf("enter two no.s\n");
    scanf("%d%d",&x,&y);
    r=product(x,y);
    printf("product of two no.s:%d",r);
    getch();
}
int product(int a,int b)
{
     int c;
     c=a*b;
     return c;
}