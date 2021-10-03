#include<stdio.h>
main()
{
	int a,b,c,d,e,f,t;
	float z;
	printf("enter your marks respectively");
	scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
	printf("MATH %d\n SCIENCE %d\n S.St %d\n ENGLISH %d\n HINDI %d\n",a,b,c,d,e);
	t=a+b+c+d+e;
	z=t/5;
	printf("aggregate marks = %d\n percentage marks = %f", t,z);
	getch();
	return 0;
}
