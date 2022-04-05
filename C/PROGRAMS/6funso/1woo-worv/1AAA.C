void show();    /* function declaration */
void sum();     /* functio declaration */
void main()
{
   clrscr();
   show();       /* function calling */
   sum();        /* function calling */
   getch();
}
  void show()     /* function definition */
  {
        printf("I am belongs to show function\n");
      printf("This is ex: program for wo org wo ret val\n");
  }
    void sum()     /* function definition */
    {
	int a,b,c;
	printf("I am belongs to sum function\n");
	printf("enter two val\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum of two numbers:%d",c);
    }

