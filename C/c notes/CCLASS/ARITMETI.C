/* program to use Arithmetic operators( +, -, *, /, %)  */

#include<stdio.h>
#include<conio.h>

void main()
{
	int var1, var2, result;
	clrscr();

	/* printing addition of two numbers */
	printf("Enter two values: \n");
	scanf("%d%d", &var1, &var2);
	result = var1 + var2;
	printf("The Addition of the two values( %d & %d ) is: %d", var1, var2, result);

	/* printing subtraction of two numbers */
	printf("\nEnter two values: \n");
	scanf("%d%d", &var1, &var2);
	result = var1 - var2;
	printf("The Subtraction of the two values( %d & %d ) is: %d", var1, var2, result);

	/* printing multiplication of two numbers */
	printf("\nEnter two values: \n");
	scanf("%d%d", &var1, &var2);
	result = var1 * var2;
	printf("The Multipllication of the two values( %d & %d ) is: %d", var1, var2, result);

	/* printing division of two numbers */
	printf("\nEnter two values: \n");
	scanf("%d%d", &var1, &var2);
	result = var1 / var2;
	printf("The Division of the two values( %d & %d ) is: %d", var1, var2, result);

	/* printing Modular Division of two numbers */
	printf("\nEnter two values: \n");
	scanf("%d%d", &var1, &var2);
	result = var1 % var2;
	printf("The Modular Division of the two values( %d & %d ) is: %d", var1, var2, result);

	getch();
}