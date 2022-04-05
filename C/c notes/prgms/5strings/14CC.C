main()
{
char a[20],b[20],c[20],l1,l2;
int i,j,k;
clrscr();
printf("enter a string\n");
gets(a);
printf("enter another string\n");
gets(b);
l1=strlen(a);
l2=strlen(b);
k=0;
for(i=0;i<l1;i++)
{
     for(j=0;j<l2;j++)
     {
	  if(a[i]==b[j])
	  {
	       c=a[k];
	       k++;
	  }
	  printf("common char's are:%s",c);
      }
}
getch();
}