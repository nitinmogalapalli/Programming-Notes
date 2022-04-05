main()
{
float pa,dis,bill;
clrscr();
printf("enter purchase amount\n");
scanf("%f",&pa);
if(pa>=5000)
{
dis=pa*0.1;
bill=pa-dis;
printf("discount is Rs:%f\nbill is Rs:%f\n",dis,bill);
}
else
{
printf("no discount\nbill is Rs:%f",pa);
}
getch();
}