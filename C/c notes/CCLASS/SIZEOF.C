/* program to find sizes of int , float, char, double, short, long
  signed, unsigned
  */
#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	int i;
	clrscr();

	/* printing the size of the different types */

	printf("Size of un signed character is: %d \n", sizeof(unsigned char));
	printf("Size of signed character is: %d \n", sizeof(signed char));
	printf("Size of un signed int is: %d \n", sizeof(unsigned int));
	printf("Size of signed int is: %d \n", sizeof(signed int));
	printf("Size of short int is: %d \n", sizeof(short int));
	printf("Size of long int is: %d \n", sizeof(long int));
	printf("Size of float is: %d \n", sizeof(float));
	printf("Size of double is: %d \n", sizeof(double));
	printf("Size of long double is: %d \n", sizeof(long double));


	i = 30293;
	printf("Size of integer variable i is: %d\n", sizeof(i));
	ch = 'r';
	printf("Size of character variable ch is: %d", sizeof(ch));

	getch();
}