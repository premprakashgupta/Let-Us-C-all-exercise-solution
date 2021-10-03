#include<stdio.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	
	}
	return fact;
}
main()
{
	int n,fact;
	printf("enter any digit\n");
	scanf("%d", &n);
	fact=factorial(n);
	printf("%d",fact);
}
