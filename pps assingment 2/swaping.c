#include<stdio.h>
void swap(int *z ,int *y);

int main()
{
	int a,b;
	
	scanf("%d%d", &a,&b);
	printf("value of a before swapping %d\n", a);
	printf("value of b before swapping %d\n", b);
	
	swap(&a, &b);
	printf("value of a after swappin %d\n", a);
	printf("value of b after swapping %d", b);
	getch();
	return 0;
}
void swap(int *z,int *y)
{
int t;

t=*z;
*z=*y;
*y=t;

}


