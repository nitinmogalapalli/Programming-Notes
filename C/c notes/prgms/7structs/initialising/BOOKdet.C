struct book
{
    int nop;
    char name[20];
    float price;
};
main()
{
     struct book b={120,"LET US SEE",180.99};
     clrscr();
     printf("book details are:\n");
     printf("no of pages:%d\nbook name:%s\nprice is:%f",b.nop,b.name,b.price);
     getch();
}