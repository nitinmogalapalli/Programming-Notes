void mod(int,int);
void main()
{
    int x,y;
    clrscr();
    printf("enter two no.s\n");
    scanf("%d%d",&x,&y);
    mod(x,y);
    getch();
}
void mod(int a,int b)
{
    int c;
    c=a%b;
    printf("remainder is:%d",c);
}