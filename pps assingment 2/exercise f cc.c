#include<stdio.h>
main()
{
	int a,b,c,d,e,f,t;
	float z;
	printf("enter your marks respectively\n");
	printf("MATHEMATICS= ");
	scanf("%d", &a);
	printf("PHYSICS= ");
	scanf("%d", &b);
	printf("CHEMISTRY= ");
	scanf("%d", &c);
	printf("ENGLISH= ");
	scanf("%d", &d);
	printf("HINDI= ");
	scanf("%d", &e);
	t=a+b+c+d+e;
	z=t/5;
	printf("aggregate marks = %d\n percentage marks = %f", t,z);
	getch();
	return 0;
}
