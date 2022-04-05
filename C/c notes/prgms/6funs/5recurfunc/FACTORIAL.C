int fact(int);
int main()
{
    int x,r;
    clrscr();
    printf("enter a no\n");
    scanf("%d",&x);
    r=fact(x);
    printf("the factorial of given no. is:%d",r);
    getch();
}
int fact(int a)
{
     int f;
     if(a==0)
     return 1;
     else
     f=a*fact(a-1);
     return f;
}