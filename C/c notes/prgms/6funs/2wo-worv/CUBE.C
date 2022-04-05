void cube(int);
void main()
{
    int x;
    clrscr();
    printf("enter a no\n");
    scanf("%d",&x);
    cube(x);
    getch();
}
void cube(int a)
{
    int c;
    c=a*a*a;
    printf("cube is:%d",c);
}