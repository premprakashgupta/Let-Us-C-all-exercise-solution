#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,s,A,area;
	printf("Enter three side of tringle");
	scanf("%f%f%f", &a,&b,&c);
	s=(a+b+c)/2.0;
	A=(s*s-a*s)*(s-b)*(s-c);
	area=sqrt(A);
	printf("Area of Triangle is = %f", area);
	getch();
	return 0;
}
