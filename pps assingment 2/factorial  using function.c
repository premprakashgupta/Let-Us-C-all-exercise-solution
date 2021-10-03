#include<stdio.h>
int factorial(int a)
{
	int i,fact=1;
	for(i=1;i<=a;i++)
	{
	fact=fact*i;
}
	
	return fact;

}
main()
{
	int a,r;
	printf("Enter any number =");
	scanf("%d", &a);
	
	r=factorial(a);
	printf("%d ", r);
	getch();
	return 0;
	
}
