main()
{
int age;
clrscr();
printf("enter the age\n");
scanf("%d",&age);
if(age<5)
{
printf("BABY");
}
else if(age<12)
{
printf("CHILD");
}
else if(age<19)
{
printf("TEENAGER");
}
else if(age<30)
{
printf("YOUNG");
}
else if(age<50)
{
printf("MIDDLE");
}
else if(age<80)
{
printf("OLD");
}
else
{
printf("EXPIRED");
}
getch();
}