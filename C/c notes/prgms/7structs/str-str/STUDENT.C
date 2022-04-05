struct dob
{
   int d,m,y;
};
struct student
{
   char name[20];
   int rno;
   float avg;
   struct dob d;
};
main()
{
   struct student s;
   clrscr();
   printf("enter student name,rno,avg\n");
   scanf("%s%d%f",s.name,&s.rno,&s.avg);
   printf("enter student date of birth d,m,y\n");
   scanf("%d%d%d",&s.d.d,&s.d.m,&s.d.y);
   printf("student details are:\n");
   printf("student name is:%s\nrno is:%d\naverage is:%f\n",s.name,s.rno,s.avg);
   printf("date of birth is:%d-%d-%d",s.d.d,s.d.m,s.d.y);
   getch();
}
