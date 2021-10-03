#include<stdio.h>
main()
{
	int i,k;
	int a[5];
	int sm=a[0];
	printf("enter element of array =");
	for(i=0;i<5;i++)
	scanf("%d", &a[i]);
	for(i=1;i<5;i++)
	{
	if(a[i]<sm)
	sm=a[i];
	}
	printf("small is %d", sm);
}
