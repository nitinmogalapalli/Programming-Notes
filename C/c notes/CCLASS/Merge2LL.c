//Exercise 9:
//a)write  a C program to merge two single linked lists.

#include<stdio.h>
#include<conio.h>
void create();
void create1();
void merge();
void display();
void display1();
typedef struct sll
{
int data;
struct sll*link;
}node;
node *curr,*root,*newnode;
typedef struct sll1
{
int data1;
struct sll1*link1;
}node1;
node *curr1,*root1,*newnode1;
main()
{
int ch;
clrscr();
root=NULL;
while(1)
{
printf("\n1.create \n");
printf("2.create1 \n");
printf("3.merge \n");
printf("4.display \n");
printf("5.display1 \n");
printf("6.exit \n");
printf("enter your choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
create();
break;
case 2:
create1();
break;
case 3:
merge();
break;
case 4:
display();
break;
case 5:
display1();
break;
default :
exit(0);
}
}
getch();
}
void create()
{
int x;
printf("enter element of node to insert \n");
scanf("%d",&x);
while(x!=-999)
{
newnode=(node*)malloc(sizeof(node));
newnode->data=x;
newnode->link=NULL;
if(root==NULL)
root=curr=newnode;
else
{
curr->link=newnode;
curr=newnode;
}
printf("another element to insert \n");
scanf("%d",&x);
}
}
void create1()
{
int x1;
printf("enter the element of node to insert \n");
scanf("%d",&x1);
while(x1!=-999)
{
newnode1=(node1*)malloc(sizeof(node1));
newnode1->data1=x1;
newnode1->link1=NULL;
if(root1==NULL)
root1=curr1=newnode1;
else
{
curr1->link1=newnode1;
curr1=newnode1;
}
printf("another element to insert");
scanf("%d",&x1);
}
}
void merge()
{
if(root==NULL)
root=root1;
else
{
curr=root;
while(curr->link!=NULL)
curr=curr->link;
curr->link=root1;
}
curr=root;
if(root==NULL)
printf("list is empty \n");
while(curr!=NULL)
{
printf("%3d",curr->data);
printf("->");
curr=curr->link;
}
printf("NULL");
}
void display()
{
curr=root;
if(root==NULL)
printf("list is underflow \n");
while(curr!=NULL)
{
printf("%d",curr->data);
printf("->");
curr=curr->link;
}
printf("NULL");
}
void display1()
{
if(root1==NULL)
printf(" the is underflow \n");
curr1=root1;
while(curr1!=NULL)
{
printf("%d",curr1->data);
printf("->");
curr1=curr1->link;
}
printf("null");
}

