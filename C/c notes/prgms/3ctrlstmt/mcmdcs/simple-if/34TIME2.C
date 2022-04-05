main()
{
int time;
clrscr();
printf("enter the time\n");
scanf("%d",&time);
if(time>1&&time<4)
{
printf("MID NIGHT");
}
if(time>3&&time<=7)
{
printf("EARLY MORNING");
}
if(time>7&&time<12)
{
printf("MORNING");
}
if(time>=12&&time<16)
{
printf("AFTERNOON");
}
if(time>=16&&time<21)
{
printf("EVENING");
}
if(time>=21&&time<=24)
{
printf("NIGHT");
}
if(time>24)
{
printf("INVALID TIME");
}
getch();
}