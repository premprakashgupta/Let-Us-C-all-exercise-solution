#include<stdio.h>
main()
{
	int i,j,k=1,a;
	printf("Enter row number =");
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		printf("%d  ",i);
		printf("\n");
	}
	
}

