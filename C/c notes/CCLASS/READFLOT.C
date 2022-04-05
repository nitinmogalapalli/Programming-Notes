/* program to declare a float variable and assign a value,
then print on to the screen */
#include<stdio.h>
#include<conio.h>
main()
{
	float fvar;
	clrscr();
	printf("Enter a float value: ");
	scanf("%f", &fvar);

	printf("The float value you entered is : %f", fvar);
}