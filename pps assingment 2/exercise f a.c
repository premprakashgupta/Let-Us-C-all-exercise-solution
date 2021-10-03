#include<stdio.h>
main()
{
	float a,b,c,d;
	printf("enter your basic salary = ");
	scanf("%f", &a);
	b=(a/5);
	c=(2*a/5);
	d=a-b-c;
	printf("gross salary = %f", d);
	getch();
	return 0;
}
