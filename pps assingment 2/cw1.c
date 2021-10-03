#include<stdio.h>
main()
{
	int i,j,k=1,n;
	scanf("%d", &n);
	for(j=n;j<=1;j--)
	{
		for(i=1;i<=j;i++)
		printf("#");
		printf("\n");
	}
	getch();
	return 0;
}
