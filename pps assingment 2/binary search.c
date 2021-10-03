#include<stdio.h>
void BubbleSwap(int n,int array[]);
main()
{
	int i,arr[6],k,lower=0,upper=5;
	int mid;
	printf("Enter value in array =");
	for(i=0;i<6;i++)
	scanf("%d", &arr[i]);
	printf("Enter value for searching =");
	scanf("%d", &k);
	BubbleSwap(6,arr);
	void BubbleSwap(int n,int array[]){
//	variable declearation

	int i,temp,j;
//	first loop
	for(j=0;j<n-1;j++)
	{
//		second loop
	for(i=0;i<n-1-j;i++)
	{
//		condition for swapping
	if(array[i]>array[i+1])
	{
		temp=array[i];
		array[i]=array[i+1];
		array[i+1]=temp;
		
	}

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
