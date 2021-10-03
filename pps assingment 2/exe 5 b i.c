#include<stdio.h>
main()
{
	int max,min,arr[100],n,i,range;
	printf("\nEnter how many element in the list :");
	scanf("%d", &n);
	printf("\nEnter the element :");
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	min=arr[1];
	max=arr[1];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
		if(arr[i]>max)
		max=arr[i];
		
	}
	range=max-min;
	printf("\nThe range=%d", range);
	getch();
	return 0;

}


