main()
{
float bill,bc;
int nb;
clrscr();
printf("enter no.of books and cost\n");
scanf("%d%f",&nb,&bc);
bill=nb*bc;
printf("bill is:%f",bill);
getch();
}