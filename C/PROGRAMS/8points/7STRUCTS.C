struct emp
{
    int eid;
    float sal;
    char n[20];
};
main()
{
   struct emp e,*p;
   clrscr();
   p=&e;
   printf("enter emp id,sal,name\n");
   scanf("%d%f%s",&p->eid,&p->sal,p->n);
   printf("the employee details are\n");
   printf("employee id is:%d\nname is:%s\nsalary is:%f",p->eid,p->n,p->sal);
   getch();
}
link()
{
    float a=0,*b;
    b=&a;
    a=*b;
}