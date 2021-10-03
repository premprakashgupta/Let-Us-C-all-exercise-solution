#include<stdio.h>
main()
{
	int i,multi,count=0,a;
	printf("Enter a number = ");
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	{
	if(multi=(a%i==0))
	{
		count++;
	}
	}
	if(count==2)
	
		printf("prime");
		else
		printf("Not prime");
	
}
