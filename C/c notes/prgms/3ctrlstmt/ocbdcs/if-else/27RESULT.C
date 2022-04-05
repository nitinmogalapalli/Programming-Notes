main()
{
int s1,s2,s3,s4,s5,s6;
clrscr();
printf("enter six subject marks\n");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
if(s1>=35&&s2>=35&&s3>=35&&s4>=35&&s5>=35&&s6>=35)
{
printf("result is:PASS");
}
else
{
printf("result is:FAIL");
}
getch();
}