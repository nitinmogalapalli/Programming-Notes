void sub(int,int);
void main()
{
   int a,b;
   clrscr();
   printf("enter two no.s\n");
   scanf("%d%d",&a,&b);
   printf("the values in main function before passing is:%d\t%d\n",a,b);
   sub(a,b);
   printf("the value in main function after passing is:%d\t%d\n",a,b);
   getch();
}
void sub(int x,int y)
{
    x=x+120;
    y=y+350;
    printf("the value in sub function:%d\t%d\n",x,y);
}