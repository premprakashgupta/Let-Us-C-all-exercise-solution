#include<stdio.h>
main()
{
	int i,a;
	int b=1;
	printf("Enter any number for factorial = ");
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	b=b*i;
	printf("%d",b);
	getch();
	return 0;
	
	
}
