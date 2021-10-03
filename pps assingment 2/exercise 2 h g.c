#include<stdio.h>
#include<math.h>
main()
{
	int p,h,A;
	float b,c,d,e,f,g;
	printf("Enter angle value = ");
	scanf("%d", &A);
	b=sin(A);
	c=cos(A);
	d=tan(A);
	e=cosec(A);
	f=sec(A);
	g=cot(A);
	printf("sinA= %f\n cosA= %f\n tanA= %f\n cosecA= %f\n secA= %f\n cotA= %f", b,c,d,e,f,g);
	getch();
	return 0;
}
