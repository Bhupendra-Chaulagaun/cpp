#include<stdio.h>

struct Complex {
	float real, imag;
	
};
void main()
{
	struct Complex c1, c2, sum;
	printf ("Enter first complex number: ");
	scanf ("%f%f", &c1.real, &c1.imag);
	
	printf ("Enter second complex number ");
	scanf("%f%f", &c2.real, &c2.imag);
	
	sum.real = c1.real + c2.real;
	sum.imag = c1.imag + c2.imag;
	
	printf ("The sum is %f + i%f", sum.real, sum.imag);
}
