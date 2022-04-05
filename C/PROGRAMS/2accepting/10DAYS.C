main()
{
int d,m,rd;
clrscr();
printf("enter the no.of days\n");
scanf("%d",&d);
rd=d%30;
m=d/30;
printf("no.of months are:%d\nno.of remaining days are:%d",m,rd);
getch();
}