#include<stdio.h>
void bubble(int arr[], int n);
main()
{
		int arr[]={3,6,1,2,8,4};
	int i,n,k;

	bubble(arr,6);
	for(i=0;i<+5;i++)
	printf("%d",arr[i]);
		getch();
	

	
	

}
	
		void bubble(int arr[], int n)
		{
		int k,t,i;
		for(k=1;k<=n-1;k++)
		for(i=0;i<=n-1-k;i++)
		
		
		if(arr[i]>arr[i+1])
		{
			t=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=t;
		}
		
}
