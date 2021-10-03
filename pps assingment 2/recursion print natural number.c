#include<stdio.h>
void printnatural(int n)
{
	if(n==0)
	return 0;
	else
	{
		printf("%d", n);
		printnatural(n-1);
		return 0;
	}
 } 
 main()
 {
 	int n=10;
 	printnatural(n);
 	return 0;
 }
