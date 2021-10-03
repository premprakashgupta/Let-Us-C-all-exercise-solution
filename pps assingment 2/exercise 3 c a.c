#include<stdio.h>
main()
{
	float cp,sp,p,l;
	printf("Enter cost price and selling price");
	scanf("%f%f",&cp,&sp);
	if(sp>cp)
	printf("profit = %f", sp-cp);
	else
	printf("loss = %f", cp-sp);
		getch();
		return 0;	
}
