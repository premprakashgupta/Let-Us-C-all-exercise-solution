#include<stdio.h>
#include"factorial.h"
main()
{
	int n,fact;
	printf("enter any digit\n");
	scanf("%d", &n);
	fact=factorial(n);
	printf("%d",fact);
}
