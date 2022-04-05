main()
{
int time;
clrscr();
printf("enter the time\n");
scanf("%d",&time);
if(time<4)
{
printf("MID NIGHT");
}
else if(time<7)
{
printf("EARLY MORNING");
}
else if(time<12)
{
printf("MORNING");
}
else if(time<16)
{
printf("AFTERNOON");
}
else if(time<20)
{
printf("EVENING");
}
else if(time<=24)
{
printf("NIGHT");
}
else
{
printf("INVALID TIME");
}
getch();
}