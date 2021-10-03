#include<stdio.h>
main()
{
	int c[3][3];
	int a[3][3];
	int b[3][3];
	int i,j;
	printf("Enter first matrix A element \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d", &a[i][j]);
	
	}
	printf("enter element of B \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d", &b[i][j]);

	}
	printf("sum of A and B matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	{
	(c[i][j])=(a[i][j])+(b[i][j]);
		printf("%d      ", c[i][j]);
	}
		printf("\n");	
	
	}
	
	getch();
	return 0;
}
