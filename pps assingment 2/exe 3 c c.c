#include<stdio.h>
main()
{
	int a;
	printf("Enter any years = ");
	scanf("%d", &a);
	if(a%4==0)
	printf("Leap year");
	else
	printf("not leap year");
	getch();
		return 0;	
}
