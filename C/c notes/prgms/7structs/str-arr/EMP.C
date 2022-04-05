struct emp
{
    int eid;
    char name[20];
    float sal;
};
main()
{
     struct emp e[20];
     int i,n;
     clrscr();
     printf("enter no.of employees\n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
	  printf("enter %d employee eid,name,sal\n",i+1);
	  scanf("%d%s%f",&e[i].eid,&e[i].name,&e[i].sal);
     }
     for(i=0;i<n;i++)
     {
	  printf("the %d employee details are:\n",i+1);
	  printf("employee eid is:%d\nname:%s\nsalary is:%f\n",e[i].eid,e[i].name,e[i].sal);
     }
      getch();
}
     link()
     {
       float a=0,*b;
       b=&a;
       a=*b;
     }
