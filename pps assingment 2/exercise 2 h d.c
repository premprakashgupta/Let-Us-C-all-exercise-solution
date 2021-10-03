#include<stdio.h>
#include<math.h>
main()
{
	int x,y;
	float r,z,t;
	printf("Enter co-ordinate  ");
	scanf("%d%d", &x,&y);
	printf("Polar form\n");
	r=sqrt(x*x+y*y);
	z=atan(y/x);
	t=(3.14/z);
	printf("polar form (%f, pi/%f)", r,t);
	getch();
	return 0;
}
