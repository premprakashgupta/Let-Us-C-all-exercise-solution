#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	printf("enter three side of triangle");
	scanf("%d%d%d", &a,&b,&c);
	if(a==b&&a==c)
	printf("equilateral");
	else if(a==b||a==c||b==c)
	printf("isoscales");
	else if(a!=b&&a!=c&&b!=c)
	printf("scalene");
	else if((a*a==b*b+c*c||a*a+b*b==c*c||b*b==a*a+c*c)&&(a>b+c||c>a+b||b>c+a))
	printf("right angle tringl");
	else
	printf("not a triangle");
	getch();
	return 0;
}
