#include<stdio.h>
#include<conio.h>

int main()
{
	union aptech
	{
		int i;
		float f;
	};

	union aptech ifl;

	ifl.i = 45; /* Integer value assigned to aptech structure */
	printf("aptech.i = %d, aptech.f = %f\n",ifl.i, ifl.f);

	ifl.f = 45.0687; /* Float value assigned to aptech structure */
	printf("aptech.i = %d, aptech.f = %f\n",ifl.i, ifl.f);

	return 0;
}
