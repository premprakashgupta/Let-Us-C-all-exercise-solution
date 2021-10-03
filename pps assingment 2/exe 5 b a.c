#include<stdio.h>
main()
{
	int a,s,t;
	printf("Enter working time period of 10 employees in hour = ");
	scanf("%d", &a);
	s=a-40;
	t=s*120;
	if(a>40)
	printf("Overtime pay of 10 employees is =%d", t);
	else
	printf("Not eligible for Overtime pay");
	getch();
	return 0;
	
}
