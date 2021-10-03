#include<stdio.h>
#include<math.h>
main()
{
	float b,z,A,c,d,e,f,g;
	printf("Enter angle value = ");
	scanf("%f", &z);
	A=(3.14159265/180)*z;
	b=sin(A);
	c=cos(A);
	d=tan(A);
	e=1/sin(A);
	f=1/cos(A);
	g=1/tan(A);
	printf("sinA= %f\n cosA= %f\n tanA= %f\n cosecA= %f\n secA= %f\n cotA= %f", b,c,d,e,f,g);
	getch();
	return 0;
}
