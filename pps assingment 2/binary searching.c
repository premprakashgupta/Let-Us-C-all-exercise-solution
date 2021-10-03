#include<stdio.h>
void BubbleSwap(int n,int array[]);
main()
{
	int i,arr[6],k,lower=0,upper=5,j,temp;
	int mid;
	int n=6;
	printf("Enter value in array =");
	for(i=0;i<6;i++)
	scanf("%d", &arr[i]);
	printf("Enter value for searching =");
	scanf("%d", &k);


//	first loop
	for(j=0;j<n-1;j++)
	{
//		second loop
	for(i=0;i<n-1-j;i++)
	{
//		condition for swapping
	if(arr[i]>arr[i+1])
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		
	}

	}
	}
		
	
	while(lower<=upper)
	{
	mid=(lower+upper)/2;
	if(arr[mid]==k)
{
	printf("found");
	break;
	
}
	else if(arr[mid]>k)
	upper=mid-1;
	else
	lower=mid+1;
	
	}
	if(lower>upper)
	
	{
		printf("not found");
	}
	
	

	
}
