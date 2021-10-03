#include<stdio.h>
void bubble(int arr[], int n);

main()
{
	int j,m;
	int arr[m];
	printf("Enter size of array=");
	scanf("%d", &m);
	printf("enter element=");
	for(j=0;j<m;j++)
	{
	scanf("%d",&arr[j]);
	}
	bubble(arr,m);
	for(j=0;j<m;j++)
	{
	printf("%d",arr[j]);
	}
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
