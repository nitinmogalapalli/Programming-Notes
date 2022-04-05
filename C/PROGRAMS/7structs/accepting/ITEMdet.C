#include<stdio.h>
#include<conio.h>
struct item
{
    int noi;
    char name[20];
    float cost,ta;
};
void main()
{
     struct item i;
     clrscr();
     printf("enter item name,cost,no.of items\n");
     scanf("%s%f%d",&i.name,&i.cost,&i.noi);
     ta=noi*cost;
     printf("item details are:\n");
     printf("no of items:%d\nname:%s\ncost is:%f\ntotal amount is:%f",i.noi,i.name,i.cost,i.ta);
     getch();
}