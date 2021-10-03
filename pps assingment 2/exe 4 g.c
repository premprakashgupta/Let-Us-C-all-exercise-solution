#include<stdio.h>
main()
{
	float h,w,a,b;
	printf("enter weight and height = ");
	scanf("%f%f", &w,&a);
	h=a*a;
	b=w/h;
	if(b<=15)
	printf("Starvation");
	else if(15.1<=b&&b<=17.5)
	printf("Anorexic");
	else if(17.6<=b&&b<=18.5)
	printf("Underweight");
	else if(18.6<=b&&b<=24.9)
	printf("Ideal");
	else if(25<=b&&b<=25.9)
	printf("Overweight");
	else if(30<=b&&b<=30.9)
	printf("Obese");
	else if(b>=40)
	printf("Morbidly Obese");
	else
	printf("Zindagi pr lanat hai");
	getch();
	return 0;
}

