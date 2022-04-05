#include<math.h>
int power(int,int);
int main()
{
    int x,y,r;
    clrscr();
    printf("enter two no.s\n");
    scanf("%d%d",&x,&y);
    r=power(x,y);
    printf("result is:%d",r);
    getch();
}
int power(int a,int b)
{
     int c;
     c=pow(a,b);
     return c;
}