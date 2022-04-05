/* program to illustrate math.h predefined functions */
#include<math.h>
main()
{
	double px,py,cx,fx,result;
	clrscr();
	printf("Enter a value to Floor: ");
	scanf("%lf",&fx);
	result = floor(fx);
	printf("The Floor value of %lf is %lf\n",fx,result);

	printf("Enter a Value to Ceil: ");
	scanf("%lf",&cx);
	result = ceil(cx);
	printf("The Ceil value of %lf is %lf\n",cx,result);

	printf("Enter two values for finding x to the power of y:\n");
	printf("Enter x : ");
	scanf("%lf",&px);
	printf("Enter y : ");
	scanf("%lf",&py);
	result = pow(px,py);
	printf("The Power of x to y: %lf",result);
	getch();
}