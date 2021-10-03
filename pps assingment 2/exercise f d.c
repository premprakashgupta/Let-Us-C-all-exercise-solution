#include<stdio.h>
main()
{
	float a,b;
	printf("enter temperature of city in fahrenheit = ");
	scanf("%f", &a);
	b=(5*a-160)/9;
	
	printf("%f degree celcius", b);
	getch();
	return 0;
}
